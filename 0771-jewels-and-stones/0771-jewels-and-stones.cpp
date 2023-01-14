class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> set;
        int res=0;
        for(auto c:jewels){
            set.insert(c);
        }
        
        for(int i=0;i<stones.length();i++){
            if(set.find(stones[i])!=set.end()){
                res+=1;
            }
        }
        return res;
    }
};