class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cur=0,n=nums.size(),res=0;
        unordered_map<int,int> map={{0,1}};
        
        for(int i=0;i<n;i++){
            cur+=nums[i];
            
            if(map.count(cur-k)){
                res+=map[cur-k];
            }
            
            map[cur]+=1;
        }
        return res;
        
    }
};