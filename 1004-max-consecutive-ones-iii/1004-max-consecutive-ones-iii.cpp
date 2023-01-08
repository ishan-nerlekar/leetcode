class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start=0,end=0,len=0,count=0;
        while(end<nums.size()){
            if(nums[end]==0) count++;
            end++;
            while(count>k){
                if(nums[start]==0) count--;
                start++;   
            }
            len=max(len,end-start);
        }
        return len;
    }
};