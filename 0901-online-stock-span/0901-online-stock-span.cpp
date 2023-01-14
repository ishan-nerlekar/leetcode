class StockSpanner {
    stack<pair<int,int>> s;
    int index=0;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        if(s.empty()){
            s.push({price,index++});
            return 1;
        }
        
        while(s.empty()==false && s.top().first<=price){
            s.pop();
        }
        
        int res=0;
        res=s.empty()?index+1:index-s.top().second;
        s.push({price,index++});
        return res;
       
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */