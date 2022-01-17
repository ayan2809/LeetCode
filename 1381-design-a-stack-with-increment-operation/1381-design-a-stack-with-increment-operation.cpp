class CustomStack {
    vector<int> data;
    int capacity;
public:
    CustomStack(int maxSize) {
        // data = new int(maxSize);
        capacity=maxSize;
    }
    
    void push(int x) {
        if(data.size()==capacity)
		{
			// cout<<"Stack Overflow"<<endl;
			return;
		}
        data.push_back(x);
        
    }
    
    int pop() {
        if(data.size()==0)
            return -1;
        int x= data[data.size()-1];
        data.pop_back();
        return x;
    }
    
    void increment(int k, int val) {
    
        if(k>data.size())
            k=data.size();
        for(int i=0;i<k;i++)
        {
            data[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */