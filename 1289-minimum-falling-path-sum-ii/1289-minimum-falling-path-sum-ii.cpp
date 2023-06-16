class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(),vector<int>(grid.size(),INT_MAX));
        int minim=INT_MAX;
        
        if(grid.size()==1) return grid[0][0];
        for(int x=0;x<grid.size();x++){
            minim=min(minim,f(0,x,grid,dp));
        }
        return minim;
    }
    int f(int i,int j,vector<vector<int>>& grid, vector<vector<int>>& dp){
        if(i==grid.size()) return 0;
        if(dp[i][j]!=INT_MAX) return dp[i][j];
        
        int ans=INT_MAX;
        
        for(int y=0;y<grid.size();y++){
            if(y==j) continue;
            int temp=grid[i][j]+f(i+1,y,grid,dp);
            ans=min(ans,temp);
        }
        return dp[i][j]=ans;
    }
};