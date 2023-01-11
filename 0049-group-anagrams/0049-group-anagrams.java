class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        
        List<List<String>> ans=new ArrayList();
        int n=strs.length;
        String[] strings=new String[n];
        
        for(int i=0;i<n;i++){
            char[] charArray=strs[i].toCharArray();
            Arrays.sort(charArray);
            strings[i]=new String(charArray);
        }
        
        HashMap<String,ArrayList<String>> index=new HashMap<>();
        
        for(int i=0;i<n;i++){
            if(index.containsKey(strings[i])){
                index.get(strings[i]).add(strs[i]);
            }
            else{
                index.put(strings[i],new ArrayList<String>());
                index.get(strings[i]).add(strs[i]);
            }
        }
        
        for(ArrayList<String> a: index.values()){
            ans.add(a);
        }
        return ans;
    }
}