class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        vector<vector<vector<int>>> dp(grid.size(),vector<vector<int>>(grid.size(),vector<int>(grid.size(),-1)));
        return max(0,f(0,0,0,grid.size(),grid,dp));
    }
    
    int f(int r1,int r2,int c1,int n,vector<vector<int>>& grid,vector<vector<vector<int>>>& dp){
        int c2=r1+c1-r2;
        if(r1>=n||r2>=n||c1>=n||c2>=n||grid[r1][c1]==-1||grid[r2][c2]==-1){
            return INT_MIN;
        }
        
        if(dp[r1][c1][r2]!=-1){
            return dp[r1][c1][r2];
        }
        
        if(r1==n-1&&c1==n-1){
            return grid[n-1][n-1];
        }
        
        int ans=grid[r1][c1];
        
        if(r1!=r2) ans+=grid[r2][c2];
        
        int temp=max(f(r1+1,r2+1,c1,n,grid,dp),f(r1,r2,c1+1,n,grid,dp));
        temp=max(temp,f(r1+1,r2,c1,n,grid,dp));
        temp=max(temp,f(r1,r2+1,c1+1,n,grid,dp));
        
        ans+=temp;
        return dp[r1][c1][r2]=ans;
    }
};