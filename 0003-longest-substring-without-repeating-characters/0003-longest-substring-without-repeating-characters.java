class Solution {
    public int lengthOfLongestSubstring(String s) {
      
        HashMap<Character,Integer> map=new HashMap<>();
        
        int start=0;
        int maxl=0;
        
        if(s.length()<=1){
            return s.length();
        }
        
        for(int i=0;i<s.length();i++) {
            char end=s.charAt(i);
            if(map.containsKey(end)){
                start = Math.max(start, map.get(end) + 1);
            }
            map.put(end,i);
            maxl=Math.max(maxl,i-start+1);
        }
        return maxl;
    }
}