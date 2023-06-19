class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum=0;
        for(auto it:nums) sum += it;
        if(nums.size()<k||sum%k) return false;
        sort(nums.begin(),nums.end());
        vector<bool> visited(nums.size(),false);
        
        return f(0,sum/k,0,k,visited,nums);
    }
    bool f(int start,int target,int cursum,int k,vector<bool>& vis,vector<int>& nums){
        if(k == 0) return true;

          if(target == cursum)
               return f(0,target,0,k-1,vis,nums);

          for(int i = start; i < nums.size(); i++)
          {
              if(vis[i] || cursum+nums[i] > target)
                  continue;

              vis[i] = true;
              if(f(i+1,target,cursum+nums[i],k,vis,nums)){
                  return true;
              }
              vis[i] = false;

              while(i+1 < nums.size() && nums[i] == nums[i+1]) i++;
           }
           return false;
        }
};