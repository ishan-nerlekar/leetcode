class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        vector<vector<int>> dp(matrix.size(),vector<int>(matrix[0].size(),INT_MAX));
        int minim=INT_MAX;
        for(int x=0;x<matrix[0].size();x++){
            minim=min(minim,f(0,x,dp,matrix));
        }
        return minim;
    }
    int f(int i,int j,vector<vector<int>>& dp,vector<vector<int>>& matrix){
        if(i==matrix.size()) return 0;
        if(j<0||j>matrix[0].size()-1) return INT_MAX;
        if(dp[i][j]!=INT_MAX) return dp[i][j];
        
        int l=f(i+1,j-1,dp,matrix);
        int m=f(i+1,j,dp,matrix);
        int r=f(i+1,j+1,dp,matrix);
        
        return dp[i][j]=matrix[i][j]+min(l,min(m,r));
    }
};