class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        unordered_map<int,int> map={{0,-1}};
        int n=nums.size(),cur=0,want=0,need=0,res=n;
        
        for(auto c: nums){
            need=(need+c)%p;
        }
        
        for(int i=0;i<n;i++){
            cur=(cur+nums[i])%p;
            map[cur]=i;
            want=(cur-need+p)%p;
            
            if(map.count(want)){
                res=min(res,i-map[want]);
            }
            
            
        }
        
        return res<n?res:-1;
    }
};