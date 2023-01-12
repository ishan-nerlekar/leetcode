class Solution {
    public String replaceWords(List<String> dictionary, String sentence) {
        String[] sen=sentence.split("\\s+");
        Set<String> set=new HashSet<>();
        
        if (dictionary == null || dictionary.size() == 0) return sentence;
        
        for(String str:dictionary){
            set.add(str);
        }
        
        StringBuilder sb=new StringBuilder();
        
        for(String s: sen){
            String prefix="";
            for(int i=0;i<s.length();i++){
                prefix=s.substring(0,i+1);
                if(set.contains(prefix)){
                    break;
                }
            }
            sb.append(" "+prefix);
        }
        
        return sb.deleteCharAt(0).toString();
    }
}