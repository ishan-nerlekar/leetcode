class Solution {
    public boolean isPalindrome(int x) {
        
        String str=String.valueOf(x);
        int start=0,end=str.length()-1;
        int flag=0;
        
        while(start<end){
            if(str.charAt(start)!=str.charAt(end)){
                flag=1;
                break;
            }
            start++;
            end--;
        }
        
        if(flag==1) return false;
        
        return true;
    }
}