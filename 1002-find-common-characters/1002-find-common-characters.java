class Solution {
    public List<String> commonChars(String[] words) {
        
        HashMap<Character, Integer> map=new HashMap<>();
        
        ArrayList<String> arr=new ArrayList<>();
        
        for(int i=0;i<words[0].length();i++){
            map.put(words[0].charAt(i),map.getOrDefault(words[0].charAt(i),0)+1);
        }
        
        for(int i=1;i<words.length;i++){
            HashMap<Character, Integer> temp=new HashMap<>();
            for(int j=0;j<words[i].length();j++){
                char c=words[i].charAt(j);
                if(map.containsKey(c)){
                    temp.put(c,Math.min(map.get(c),temp.getOrDefault(c,0)+1));
                }
            }
            map=temp;
        }
        
        for(char c1: map.keySet()){
            for(int i=0;i<map.get(c1);i++){
                arr.add(c1+"");
            }
        }
        return arr;
    }
}