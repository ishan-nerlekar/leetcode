class Solution {
public:
    int mySqrt(int x) {
        long lo=0,mid=0,hi=x,sqrt;
        while(lo<=hi){
            mid=(lo+hi)/2;
            
            if(x==1) return 1;
    
            else if(mid*mid==x){
                sqrt=mid;
                break;}
            else if(mid*mid<x){
                lo=mid+1;
                sqrt=mid;
                    }
            else
                hi=mid-1;
        }
        return sqrt;
        
        
    }
};