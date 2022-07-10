class SmallestInfiniteSet {
    set<int> st;
public:
    SmallestInfiniteSet() {
        for(int i = 1; i <= 1000; i++){
            st.insert(i);
        }
    }
    
    int popSmallest() {
        int minEl = *st.begin();
        st.erase(st.begin());
        return minEl;
    }
    
    void addBack(int num) {
        if(!st.count(num)){
            st.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */