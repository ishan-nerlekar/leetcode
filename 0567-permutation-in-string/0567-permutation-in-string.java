class Solution {
    public boolean checkInclusion(String s1, String s2) {
        
        Map<Character, Integer> map=new HashMap<>();

        
        if(s1.length()>s2.length()) return false;
        
        for(char c: s1.toCharArray()){
                map.put(c,map.getOrDefault(c,0)+1);
            
            
        }
        
        int match=0;
        
        for(int i=0;i<s2.length();i++){
            char s=s2.charAt(i);
            if(map.containsKey(s)){
                map.put(s,map.get(s)-1);
                if(map.get(s)==0){
                    match++;
                }
            }
            
            if(i>=s1.length()){
                s=s2.charAt(i-s1.length());
                if(map.containsKey(s)){
                    if(map.get(s)==0){
                        match--;
                    }
                    map.put(s,map.get(s)+1);
                    
                }
            }
            
            if(match==map.keySet().size()){
                return true;
            }
        }
        
        return false;
        
        
    }
}