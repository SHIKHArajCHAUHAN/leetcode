class StockSpanner {
public:
    stack<pair<int,int>>st;
    StockSpanner() {
        
    }
    
    int next(int price) {
       int k = 0;
        while(!st.empty() && st.top().first<=price)
        {
            k += st.top().second+1;
            st.pop();
        }
        st.push({price, k});
        return k+1; 
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */