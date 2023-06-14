class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> temp1,temp2;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size();i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=nums.size()-1) temp2.push_back(nums[i]);
        }
        
        return max(f(temp1),f(temp2));
    }
    
    int f(vector<int>& nums) {
        
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

