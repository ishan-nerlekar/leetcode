class Solution {
    public String replaceWords(List<String> dictionary, String sentence) {
        String[] sen=sentence.split(" ");
        Set<String> set=new HashSet<>();
        
        for(String str:dictionary){
            set.add(str);
        }
        
        for(int j=0;j<sen.length;j++){
            for(int i=0;i<sen[j].length();i++){
                if(set.contains(sen[j].substring(0,i+1))){
                    sen[j]=sen[j].substring(0,i+1);
                    break;
                }
            }
        }
        
        String myStr="";
        for(String s:sen){
            myStr=myStr+s+" ";
        }
        myStr=myStr.trim();
        
        return myStr;
    }
}