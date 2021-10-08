class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> x;
    MinStack() {
    }
    
    void push(int val) {
        x.push_back(val);
    }
    
    void pop() {
        x.pop_back();
    }
    
    int top() {
        return x[x.size()-1];
    }
    
    int getMin() {
        return *min_element(x.begin(), x.end());
        
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