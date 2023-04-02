class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size();
        int m=potions.size();
        vector<int> pairs;
        sort(potions.begin(), potions.end());
        
        for(int i=0;i<n;i++){
            int num=0;
            int start=0,end=m-1;
            while(start<=end){
                int mid=(start+end)/2;
                long long temp=(long long)spells[i]*(long long)potions[mid];
                if(temp>=success){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            pairs.push_back(m-start);
        }
        return pairs;
    }
};