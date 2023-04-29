class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int,vector<int>>> ans;
        vector<vector<int>> res;
        for(auto a: points){
            int dist=a[0]*a[0] + a[1]*a[1];
            ans.push_back({dist,a});
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<k;i++){
            res.push_back(ans[i].second);
        }
        return res;
    }
};