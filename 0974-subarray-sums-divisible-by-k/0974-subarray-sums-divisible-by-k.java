class Solution {
    public int subarraysDivByK(int[] nums, int k) {
        int[] map=new int[k];
        int sum=0,count=0;
        
        map[0]=1;
        for(int n: nums){
            sum=(sum+n)%k;
            if(sum<0) sum+=k;
            
            count+=map[sum];
            map[sum]++;
        }
        
        return count;
    }
}