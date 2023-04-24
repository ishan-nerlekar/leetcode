class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        while(stones.size()>1){
            int x=stones.back();
            stones.pop_back();
            int y=stones.back();
            stones.pop_back();
            if(x>y){
                stones.push_back(x-y);
            }
            sort(stones.begin(),stones.end());
        }
        return stones.empty()?0:stones.front();
    }
};