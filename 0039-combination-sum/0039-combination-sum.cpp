class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> res;
        
        sum(0,target,ds,candidates,res);
        return res;
    }
    
    void sum(int index,int target, vector<int>& ds,vector<int> candidates,vector<vector<int>>& res){
        if(target==0){
            res.push_back(ds);
            return;
        }
        
        if(target<0 || index==candidates.size()){
            return;
        }
        
        ds.push_back(candidates[index]);
        sum(index,target-candidates[index],ds,candidates,res);
        ds.pop_back();
        sum(index+1,target,ds,candidates,res); 
        
    }
};