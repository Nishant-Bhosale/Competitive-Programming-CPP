class MinStack {
public:
    vector<pair<int, int>> vec;
    MinStack() {}
    
    void push(int val) {
        if(vec.empty()){
            vec.push_back({val, val});
        }else{
            vec.push_back({val, min(vec.back().second, val)});
        }
    }
    
    void pop() {
        vec.pop_back();
    }
    
    int top() {
        return vec.back().first;
    }
    
    int getMin() {
        return vec.back().second;
    }
};
