class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i,ans=INT_MAX,add,res=0;
        if(nums.size()==3) return nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size()-1;i++){
            int start=i+1,end=nums.size()-1;
            
            while(start<end){
                add=nums[start]+nums[end]+nums[i];
                
                if(add==target) return target;
                if(abs(target-add)<ans) {
                    ans=abs(target-add);
                    res=add;}
                else if(add>target) end--;
                else start++;
            }
        }
        return res;       
    }
};