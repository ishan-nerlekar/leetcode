class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int high=nums.size()-1,low=0, mid;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]<target) low=mid+1;
            else if(nums[mid]==target) return mid;
            else high=mid-1;
        } 
         return low;
    }
};