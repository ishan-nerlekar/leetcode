class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0,end=0,sum=0,n=nums.size(),len=INT_MAX;
        
        while(end<n){
            sum+=nums[end];
            end++;
            
            while(sum>=target){
                sum-=nums[start];
                start++;
                len=min(len,end-start+1);
            }           
        }      
        return len==INT_MAX?0:len;
    }
};