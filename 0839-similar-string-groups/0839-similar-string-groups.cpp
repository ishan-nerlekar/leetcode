class Solution {
public:
    int numSimilarGroups(vector<string>& strs) {
        if(strs.size() < 2) return strs.size();
        int groups=0;
        for(int i=0;i<strs.size();i++){
            if(strs[i].empty()) continue;
            string st=strs[i];
            strs[i]="";
            groups++;
            dfs(strs,st);
        }
        return groups;
    }
    void dfs(vector<string>& arr, string str){
        for(int j=0;j<arr.size();j++){
            if(arr[j].empty()) continue;
            if(checker(str,arr[j])){
                string s=arr[j];
                arr[j]="";
                dfs(arr,s);
            }
        }
    }
    bool checker(string s1,string s2){
        int a=0,i=0;
        while(a <= 2 && i < s1.length()){
            if(s1[i] != s2[i]) a++;
            i++;
        }
        return a==2||a==0;
    }
};