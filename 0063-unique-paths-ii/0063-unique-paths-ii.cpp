class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> dp(obstacleGrid.size(),vector<int>(obstacleGrid[0].size(),-1));
        return f(obstacleGrid.size()-1,obstacleGrid[0].size()-1,dp,obstacleGrid);
    }
    
    int f(int m,int n,vector<vector<int>>& dp,vector<vector<int>>& obstacleGrid){
        if(m>=0&&n>=0&&obstacleGrid[m][n]==1) return 0;
        if(m==0&&n==0) return 1;
        if(m<0||n<0) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        
        int up=f(m-1,n,dp,obstacleGrid);
        int left=f(m,n-1,dp,obstacleGrid);
        
        return dp[m][n]=up+left;
    }
};


