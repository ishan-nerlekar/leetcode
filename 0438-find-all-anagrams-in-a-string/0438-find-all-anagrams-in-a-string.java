class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        Map<Character,Integer> map=new HashMap<>();
        List<Integer> list=new ArrayList<>();
        if(s.length()<p.length() || s.length()==0 || p.length()==0) return list;
        
        for(char c: p.toCharArray()){
            map.put(c,map.getOrDefault(c,0)+1);
        }
        
        int start=0,end=0,len=Integer.MAX_VALUE;
        int counter=map.size();
        
        while(end<s.length()){
            char x=s.charAt(end);
            if(map.containsKey(x)){
                map.put(x,map.get(x)-1);
                if(map.get(x)==0){
                    counter--;
                }
            }
            
            end++;
            
            while(counter==0){
                char temp=s.charAt(start);
                if(map.containsKey(temp)){
                    map.put(temp,map.get(temp)+1);
                    if(map.get(temp)>0){
                        counter++;
                    }
                }
                
                if(end-start==p.length()){
                    list.add(start);
                }
                start++;
            }
        }
        
        return list;
    }
}