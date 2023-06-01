class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<bool>> visited (image.size(),vector<bool>(image[0].size(),false));
        queue<pair<int,int>> q;
        visited[sr][sc]=true;
        q.push({sr,sc});
        
        while(!q.empty()){
            pair<int,int> s = q.front();
            int a=s.first;
            int b=s.second;
            q.pop();
            
            if(a+1<image.size()&&!visited[a+1][b]&&image[a][b]==image[a+1][b]){
                visited[a+1][b]=true;
                q.push({a+1,b});
            }
            if(a-1>=0&&!visited[a-1][b]&&image[a][b]==image[a-1][b]){
                visited[a-1][b]=true;
                q.push({a-1,b});
            }
            if(b+1<image[0].size()&&!visited[a][b+1]&&image[a][b]==image[a][b+1]){
                visited[a][b+1]=true;
                q.push({a,b+1});
            }
            if(b-1>=0&&!visited[a][b-1]&&image[a][b]==image[a][b-1]){
                visited[a][b-1]=true;
                q.push({a,b-1});
            }
            
            image[a][b]=color;
        }
        return image;
    }
};