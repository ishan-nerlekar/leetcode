class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        if(piles.length==1){
            if(piles[0]<=h){
                return 1;
            }
            else{
                if(piles[0]%h!=0){
                    return piles[0]/h+1;
                }
                else{
                    return piles[0]/h;
                }
                
            }
            
        }
    
        int right=0;
        for(int p: piles){
            right=Math.max(right,p);
        }
        int left=1;
        while(left<right){
            int mid=(left+right)/2,hour=0;
            for(int p:piles){
                if(p<=mid){hour+=1;}
                if(p>mid){
                    hour+=(p+mid-1)/mid;
                    
                }
            }
            
            if(hour>h){left=mid+1;}
            else{right=mid;}
        }
        return left;
    }
}