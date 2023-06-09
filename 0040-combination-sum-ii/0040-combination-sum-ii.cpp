class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        sum(0,target,candidates,ds,res);
        return res;
    }
    void sum(int index,int target,vector<int> candidates,vector<int>& ds,vector<vector<int>>& res){
        if(target==0){
            res.push_back(ds);
            return;
        }
        else{
            for(int i=index;i<candidates.size();i++){
                if(candidates[i]>target) return;
                if(i>index&&candidates[i]==candidates[i-1]) continue;
                ds.push_back(candidates[i]);
                sum(i+1,target-candidates[i],candidates,ds,res);
                ds.pop_back();
            }
        }
    }
};