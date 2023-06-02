class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        vector<vector<bool>> visited(m,vector<bool>(grid[0].size(),false));
        queue<pair<int,int>> q;
        vector<int> dir={-1,0,1,0,-1};
        int fresh=0;
        int ans=-1;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                if(grid[i][j]==1){
                    fresh+=1;
                }
            }
        }
        while(!q.empty()){
            int size=q.size();
            while(size--){
                pair<int,int> p=q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    int r=p.first+dir[i];
                    int c=p.second+dir[i+1];
                    
                    if(r<m&&r>=0 && c<grid[0].size()&&c>=0 &&grid[r][c]==1){
                        q.push({r,c});
                        grid[r][c]=2;
                        fresh-=1;
                    }
                }
            }
            ans++;
        }
        
        if(fresh>0) return -1;
        if(ans==-1) return 0;
        
        return ans;
        
        
        
    }
};