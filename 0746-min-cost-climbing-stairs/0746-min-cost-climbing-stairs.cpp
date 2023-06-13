class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n,-1);
        dp[0]=cost[0];
        dp[1]=cost[1];
        return dp[n-1]=min(mincost(n-1,cost,dp),mincost(n-2,cost,dp));
    }
    
    int mincost(int n,vector<int> cost,vector<int>& dp){
        if(n<0) return 0;
        if(n==0||n==1) return cost[n];
        if(dp[n]!=-1) return dp[n];
        
        return dp[n]=cost[n]+min(mincost(n-1,cost,dp),mincost(n-2,cost,dp));
    }
};