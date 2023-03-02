class LRUCache {
public:
    map<int,int>mp;
    int c=0;
    int size;
    list<int>l;
    map<int,list<int>::iterator> address;
    LRUCache(int capacity) {
        c=capacity;
        size=0;
    }
    
    int get(int key) {
       if(mp.find(key)==mp.end())
       {
           return -1;
       }
        list<int>::iterator it=address[key];
        l.erase(it);
        address.erase(key);
        l.push_front(key);
        address[key]=l.begin();
        return mp[key];
    }
    
    void put(int key, int value) {
      if(mp.find(key)!=mp.end())
      {
          l.erase(address[key]);
          address.erase(key);
          size--;
      }
        if(size==c)
        {
            int k=l.back();
            l.pop_back();
            address.erase(k);
            mp.erase(k);
            size--;
        }
        size++;
    l.push_front(key);
        address[key]=l.begin();
        mp[key]=value;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */