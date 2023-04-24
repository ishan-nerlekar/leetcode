unordered_map<char, string> L({{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}});
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(!digits.size()) return ans;
        int len=digits.size();
        dfs(0,"",ans,digits,len);
        return ans;
    }
    void dfs(int pos,string str,vector<string> &ans,string &digits,int &len){
        if(len==pos) ans.push_back(str);
        else{
            string letters=L[digits[pos]];
            for(int i=0;i<letters.size();i++){
                dfs(pos+1,str+letters[i],ans,digits,len);
            }
        }
    }
};