class SeatManager {
    set<int>avail;
public:
    SeatManager(int n) {
      for(int i=1;i<=n;i++)
      {
          avail.insert(i);
      }
    }
    
    int reserve() {
       int x=*avail.begin();
        avail.erase(x);
        return x;
        
    }
    
    void unreserve(int seatNumber) {
        avail.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */