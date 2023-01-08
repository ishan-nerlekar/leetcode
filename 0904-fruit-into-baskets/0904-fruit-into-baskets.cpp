class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int start=0,end=0,count=0,len=0;
        unordered_map<int,int> map;
        while(end<fruits.size()){
            map[fruits[end]]++;
            if(map[fruits[end]]==1) count++;
            end++;
            while(count>2){
                map[fruits[start]]-=1;
                if(map[fruits[start]]==0) count--;
                start++;
            }
        len=max(len,end-start);
            
        }
        
        return len;
    }
};