class Solution {
    public int findMaxLength(int[] nums) {
        if(nums.length==0||nums.length==1){
            return 0;
        }
        
        for(int i=0;i<nums.length;i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
        }
        
        Map<Integer,Integer> res=new HashMap<>();
        int sum=0;
        int max=0;
        res.put(0,-1);
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
            if(res.containsKey(sum)){
                int last=res.get(sum);
                max=Math.max(max,i-last);
            }
            else{
                res.put(sum,i);
            }
            
        }
        return max;
    }
}