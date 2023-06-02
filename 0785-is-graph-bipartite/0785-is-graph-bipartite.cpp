class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> color(n);
        queue<int> q;
        
        for(int i=0;i<n;i++){
            if(color[i]) continue;
            q.push(i);
            color[i]=1;
            
            while(!q.empty()){
                int cur=q.front();
                q.pop();
                for(auto x: graph[cur]){
                    if(color[x]==0){
                        color[x]=-color[cur];
                        q.push(x);
                    }
                    else if(color[x]!=-color[cur]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};