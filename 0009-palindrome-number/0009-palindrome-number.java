class Solution {
    public boolean isPalindrome(int x) {
        StringBuilder temp=new StringBuilder();
        String str=String.valueOf(x);
        temp.append(str);
        temp.reverse();
        String res=temp.toString();
        
        if(res.equals(str)){
            return true;
        }
        
        else{
            return false;
        }
    }
}