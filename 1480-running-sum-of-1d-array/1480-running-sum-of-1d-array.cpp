class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i,n=nums.size(),k=0;
        for(i=0;i<n;i++){
            nums[i]=k+nums[i];
            k=nums[i];
        }return nums;
        
    }
};