class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int> map;
        int subs=0;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            map[c]+=1;
            if(map[c]>1){
                subs+=1;
                map.clear();
                map[c]+=1;
            }
        }
        if(!map.empty()){
            subs+=1;
        }
        return subs;
    }
};