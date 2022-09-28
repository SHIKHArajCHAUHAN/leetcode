class MinStack {
public:
     stack<pair<int,int>> s;
    MinStack() {
        
    }
    void push(int val) {
        if(s.empty()){
            s.push({val,val});
        }
        else{
            s.push({val,min(val,s.top().second)});
        }
    }
    void pop() 
    {if(!s.empty())
        s.pop();
    }
    int top() {
        if(!s.empty())
        return s.top().first;
        else return 0;
    }
    
    int getMin() {
        return s.top().second;
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