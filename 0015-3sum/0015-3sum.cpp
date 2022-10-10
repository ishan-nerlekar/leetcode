class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ans;
        if(nums.size()<3) return res;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            if(i==0||nums[i]!=nums[i-1]){
            int l=i+1;
            int h=nums.size()-1,sum=0-nums[i];
            
                while(l<h){
                    if(nums[l]+nums[h]==sum){
                        ans={nums[i],nums[l],nums[h]};
                        res.push_back(ans);
        
                        while (l < h && nums[l] == nums[l+1]) l++;
                        while (l < h && nums[h] == nums[h-1]) h--;
                        l++; h--;}
                    
                    else if (nums[l]+nums[h]<sum) 
                        l++;
                    else 
                        h--;}
            }      
        }
        return res;
        
    }
};