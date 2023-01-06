class Solution {
    public int lengthOfLongestSubstring(String s) {
      
        HashMap<Character,Integer> map=new HashMap<>();
        
        int end=0,start=0,len=0,counter=0;
        
        while(end<s.length()){
            char c=s.charAt(end);
            map.put(c,map.getOrDefault(c,0)+1);
            if(map.get(c)>1) counter++;
            
            end++;
            
            while(counter>0){
                char temp=s.charAt(start);
                if(map.getOrDefault(temp,0)>1) counter--;
                map.put(temp,map.getOrDefault(temp,0)-1);
                start++;
            }
            
            len=Math.max(len,end-start);
        }
        
        return len;
    }
}