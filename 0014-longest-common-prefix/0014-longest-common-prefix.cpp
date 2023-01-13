class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int flag=0;
        
        if(strs.size()==0) return "";
        if(strs.size()==1) return strs[0];
        
        for(int i=0;i<strs[0].length();i++){
            s+=strs[0][i];
            for(int j=1;j<strs.size();j++){

                if(strs[j].find(s)==0) continue;
                else{
                    flag=1;
                    break;
                }
            }
            
            if(flag==1) break;
        }
        
        if(flag==1){
            return s.substr(0,s.length()-1);
        }
        else{
            return s;
        }
    }
};