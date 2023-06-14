class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return f(n-1,nums,dp);
    }
    int f(int ind,vector<int>& nums,vector<int>& dp){
        if(ind==0) return nums[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        
        int left=f(ind-1,nums,dp);
        int right=nums[ind]+f(ind-2,nums,dp);
        
        return dp[ind]=max(left,right);
    }
};