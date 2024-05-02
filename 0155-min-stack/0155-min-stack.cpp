class MinStack {
vector<int> stk, minidx;
    public:   
    MinStack() {}
    
    void push(int val) {
        stk.push_back(val);
        if (minidx.empty()){
            minidx.push_back(0);
        } else if (val<stk[minidx.back()]){
            minidx.push_back(stk.size()-1); 
        }
    }
    
    void pop() {
        if (minidx.back()==(stk.size()-1)){
            minidx.pop_back();
            stk.pop_back();
        } else {
            stk.pop_back();
        }
    }
    
    int top() {
        return stk.back(); 
    }
    
    int getMin() {
        return stk[minidx.back()];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */