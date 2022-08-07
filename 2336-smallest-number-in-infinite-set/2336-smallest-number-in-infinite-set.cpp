class SmallestInfiniteSet {
    set<int>s;
public:
    
    SmallestInfiniteSet() {
      for(int i=1;i<1001;i++)
      {
          s.insert(i);
      }
    }
    
    int popSmallest() {
      if(!s.empty()){
          int solve=*s.begin();
          s.erase(solve);  
      return solve;}
        return -1;
    }
    
    void addBack(int num) {
      s.insert(num) ; 
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */