class SmallestInfiniteSet {
    vector<int> vec;
public:
    SmallestInfiniteSet() {
        for(int i=1;i<1001;i++){
            vec.push_back(i);
        }
    }
    
    int popSmallest() {
        sort(vec.begin(),vec.end());
        int x=vec.front();
        vec.erase(vec.begin());
        return x;
    }
    
    void addBack(int num) {
        if(find(vec.begin(),vec.end(),num)==vec.end()){
            vec.push_back(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */