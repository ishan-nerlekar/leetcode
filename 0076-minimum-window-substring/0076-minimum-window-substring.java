class Solution {
    public String minWindow(String s, String t) {
        
        Map<Character,Integer> map=new HashMap<Character,Integer>();
        
        for(char c:s.toCharArray()){
                map.put(c,0);
        }
        
        
        for(char c:t.toCharArray()){
            if(map.containsKey(c)){
                map.put(c,map.getOrDefault(c,0)+1);
            }
            else{
                return "";
            }
                
        }
        
        if(s.length()<t.length() || s.length()==0 || t.length()==0){
            return "";
        }
       
        int start=0,end=0,min_len=Integer.MAX_VALUE,counter=t.length(),min_start=0;
        
        while(end<s.length()){
            if(map.get(s.charAt(end))>0){
                counter--;
            }
            map.put(s.charAt(end),map.get(s.charAt(end))-1);
            end++;
            
            while(counter==0){
                if(end-start<min_len){
                    min_start=start;
                    min_len=end-start;
                }
                map.put(s.charAt(start),map.getOrDefault(s.charAt(start),0)+1);
                if(map.get(s.charAt(start))>0){
                    counter++;
                }
                start++;
            }
            
        }

        
        if(min_len!=Integer.MAX_VALUE){
            return s.substring(min_start,min_len+min_start);
        }
        return "";
        
        
    }
}