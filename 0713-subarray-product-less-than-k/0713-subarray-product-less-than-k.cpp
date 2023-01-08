class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size(),prod=1,start=0,end=0,count=0;
        
        if(nums.size()==0){
            return 0;
        }
        
        if(nums.size()==1){
            if(nums[0]<k) return 1;
            else return 0;
        }
        
        while(end<n){
            prod=prod*nums[end];
            
            
            while(prod>=k&&start<=end){
                prod/=nums[start];
                
                start++;
            }
            
            count+=end-start+1;
            end++;
        }
        
        
        
        return count;
        
    }
};