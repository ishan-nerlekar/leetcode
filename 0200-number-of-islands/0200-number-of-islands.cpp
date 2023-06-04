class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int> dir={-1,0,1,0,-1};
        int ans=0;
        queue<pair<int,int>> q;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    ans++;
                    q.push({i,j});
                    grid[i][j]=0;
                    while(!q.empty()){
                        pair<int,int> p=q.front();
                        q.pop();
                        for(int i=0;i<4;i++){
                            int r=p.first+dir[i];
                            int c=p.second+dir[i+1];

                            if(r<m&&r>=0 && c<grid[0].size()&&c>=0 &&grid[r][c]=='1'){
                                q.push({r,c});
                                grid[r][c]=0;
                            }
                        }
                    }
                }
            }
        }
        
        return ans;
    }
};