class Solution {
public:
    int climbStairs(int n) {
        int ways[n+1];
        if(n==0) return 0;
        if(n==1) return 1;
        if(n>=2){
            ways[1]=1;
            ways[2]=2;
        }
        
        for(int i=3;i<n+1;i++){
            ways[i]=ways[i-1]+ways[i-2];
        }
        
        return ways[n];
    }
};