class FreqStack {
public:
    int idx=0;
    map<int,int>mp;
    priority_queue<tuple<int,int,int>>pq;
    FreqStack() {
        
    }
    
    void push(int val) {
        mp[val]++;
        pq.push(make_tuple(mp[val],idx,val));
        idx++;
    }
    
    int pop() {
        auto [cnt,order,value]=pq.top();
        mp[value]--;
        pq.pop();
        return value;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */