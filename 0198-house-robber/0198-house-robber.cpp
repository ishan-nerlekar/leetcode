class Solution {
public:
    int rob(vector<int>& nums) {
        
        int prev2=0;
        int prev=nums[0];
        for(int i=1;i<nums.size();i++){
            int left=prev;
            int right=nums[i];
            if(i>1) right+=prev2;
            int curr=max(left,right);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
    
};