class RecentCounter {
   // queue<int>q;
public:
     queue<int>q;
    RecentCounter() {
      // int r=0; 
    }
   
    int ping(int t) {
      //  q.push(t);
        if(t<3000)
        {
            q.push(t);
            return q.size();
        }
        q.push(t);
      while(q.front()<t-3000)
      {
          q.pop();
      }
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */