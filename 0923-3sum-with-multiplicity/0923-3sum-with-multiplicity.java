class Solution {
    public int threeSumMulti(int[] arr, int target) {
        long result=0;
        long mod=1000000007;
        long[] data=new long[101];
        
        for(int a:arr){
            data[a]++;
        }
        
        for(int i=0;i<101;i++){
            for(int j=i;j<101;j++){
                int k=target-i-j;
                if(k>100||k<0) continue;
                
                if(i==j&&j==k){
                    result+=(data[i])*(data[i]-1)*(data[i]-2)/6;
                }
                else if(i==j&&j!=k){
                    result+=(data[i])*(data[i]-1)*data[k]/2;
                }
                else if(i<j&&j<k){
                    result+=(data[i])*(data[j])*data[k];
                }
                
                result%=mod;
            }
        }
        
        return (int)result;
    }
}