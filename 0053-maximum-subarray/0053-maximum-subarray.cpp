class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxim=nums[0];
        int res=nums[0];
        for(int i=1;i<n;i++){
            maxim=max(maxim+nums[i],nums[i]);
            res=max(maxim,res);
        }
        return res;
    }
};