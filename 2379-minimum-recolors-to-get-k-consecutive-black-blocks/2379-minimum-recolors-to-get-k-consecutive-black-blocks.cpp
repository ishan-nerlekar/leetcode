class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int start=0,end=0,count=0,res=INT_MAX;
        while(end<blocks.size()){
            if(blocks[end]=='W') count++;
            if(end-start+1==k){
                res=min(res,count);
                if(blocks[start]=='W') count--;
                start++;
            }
            end++;
        }
        return res;
    }
};