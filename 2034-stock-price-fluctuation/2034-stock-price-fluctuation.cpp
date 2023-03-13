class StockPrice {
public:
  int prev=0;
    unordered_map<int,int> mp;
    multiset<int> st;
    void update(int time, int price) 
    {
        if(mp.find(time)!=mp.end())
        {
            st.erase(st.find(mp[time])); 
        }
        st.insert(price);
        mp[time]=price;
        prev=max(prev,time);
    }
    
    int current() 
    {
        return mp[prev];
    }
    
    int maximum() 
    {
        return *st.rbegin();
    }
    
    int minimum() 
    {
        return *st.begin();
    }

};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */