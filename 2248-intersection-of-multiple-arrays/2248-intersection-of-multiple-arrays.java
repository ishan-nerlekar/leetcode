import java.util.HashMap;
import java.util.Map.Entry;
class Solution {
    public List<Integer> intersection(int[][] nums) {
        
        
        ArrayList<Integer> arr=new ArrayList<>();
        int[] data=new int[1001];
        
        for(int[] arr1: nums){
            for(int i: arr1){
                data[i]++;
            }
        }
        for(int i=0;i<data.length;i++){
            if(data[i]==nums.length){
                arr.add(i);
            }
        }
        
        return arr;
    }
}