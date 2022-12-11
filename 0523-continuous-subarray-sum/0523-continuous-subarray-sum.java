class Solution {
    public boolean checkSubarraySum(int[] nums, int k) {
        Map<Integer,Integer> map=new HashMap<>();
        int psum=0,res=0;
        
        for(int i=0;i<nums.length;i++){
            psum+=nums[i];
            
            psum=psum%k;
                
            if(psum==0&&i>0){
                return true;
            }
            if(map.containsKey(psum)&&i-map.get(psum)>1){
                return true;
            }
            if (!map.containsKey(psum)){
                map.put(psum,i);
            }
            
        }
        return false;
    }
}