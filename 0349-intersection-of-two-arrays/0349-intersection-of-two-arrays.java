class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        HashMap<Integer,Boolean> map=new HashMap<>();
        ArrayList<Integer> arr = new ArrayList<Integer>();
        
        for(int i=0;i<nums1.length;i++){
            map.put(nums1[i],false);
        }
        for(int j=0;j<nums2.length;j++){
            if(map.containsKey(nums2[j])){
                arr.add(nums2[j]);
            }
        }
        Set<Integer> set = new LinkedHashSet<>();
        set.addAll(arr);
        arr.clear();
        arr.addAll(set);
        int[] ans=new int[arr.size()];
        for(int k=0;k<arr.size();k++){
            ans[k]=arr.get(k);
        }
        return ans;
        
    }
}