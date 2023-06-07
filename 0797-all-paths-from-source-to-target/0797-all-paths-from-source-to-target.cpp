class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> current(graph.size(),false);
        
        dfs(0,graph.size()-1,ans,graph,current,temp);
        
        return ans;
    }
    
    void dfs(int node, int dest, vector<vector<int>>& ans, vector<vector<int>>& graph, vector<bool>& current, vector<int>& temp){
        current[node]=true;
        temp.push_back(node);
        if(node!=dest){
            for(auto u:graph[node]){
                if(!current[u]){
                    dfs(u,dest,ans,graph,current,temp);
                }
            }
        }
        else{
            ans.push_back(temp);
        }
        
        current[node]=false;
        temp.pop_back();
    }
};