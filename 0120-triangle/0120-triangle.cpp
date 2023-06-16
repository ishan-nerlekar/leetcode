class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp(triangle.size(),vector<int>(triangle.size(),-1));
        return f(0,0,dp,triangle);
    }
    int f(int i,int j,vector<vector<int>>& dp, vector<vector<int>>& triangle){
        if(i==triangle.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        
        int l=f(i+1,j,dp,triangle);
        int r=f(i+1,j+1,dp,triangle);
        
        return dp[i][j]=triangle[i][j]+min(l,r);
    }
};