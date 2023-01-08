class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostK(nums,k)-atMostK(nums,k-1);
    }
    
    int atMostK(vector<int>& nums, int k){
        int n=nums.size(),start=0,end=0,count=0,res=0;
        unordered_map<int,int> map;
        while(end<n){
            map[nums[end]]+=1;
            if(map[nums[end]]==1) count++;
            
            end++;
            
            while(count>k){
                map[nums[start]]-=1;
                if(map[nums[start]]==0) count--;
                
                start++;
            }
            
            res+=end-start+1;
        }
        
        return res;
    }
};