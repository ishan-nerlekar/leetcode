class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        
        for(int i=0;i<m;i++){
            flip(board,i,0);
            flip(board,i,n-1);
        }
        
        for(int j=0;j<n;j++){
            flip(board,0,j);
            flip(board,m-1,j);
        }
        
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O')
                    board[i][j]='X';
                else if(board[i][j]=='B')
                    board[i][j]='O';
            }
        }
    }
    
    void flip(vector<vector<char>>& board,int i,int j){
        int m=board.size();
        int n=board[0].size();
        if(i<0||i>=m||j<0||j>=n||board[i][j]!='O'){
            return;
        }
        
        board[i][j]='B';
        
        flip(board,i-1,j);
        flip(board,i+1,j);
        flip(board,i,j-1);
        flip(board,i,j+1);
        
    }
};

