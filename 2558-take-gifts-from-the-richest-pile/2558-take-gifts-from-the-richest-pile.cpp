class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq(begin(gifts),end(gifts));
        
        while(k>0){
            int x=pq.top();
            pq.pop();
            int y=sqrt(x);
            pq.push(y);
            k--;
        }
        long long sum=0;
        while(!pq.empty()){
            long long s=pq.top();
            pq.pop();
            sum+=s;
        }
        
        return sum;
    }
};