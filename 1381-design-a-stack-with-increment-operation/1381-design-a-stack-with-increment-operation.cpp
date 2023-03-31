class CustomStack {
public:
    stack<int>s;
    int size;
    CustomStack(int maxSize) {
        size=maxSize;
    }
    
    void push(int x) {
        if(s.size()<size)
       s.push(x); 
    }
    
    int pop() {
        int x=-1;
      if(!s.empty()){
         x=s.top() ;
          s.pop();
          
      } 
        return x;
    }
int fn(int k ,int val){

if(s.empty()){
    return 1;

}
int valCur = s.top();
s.pop();
int increement = fn(k,val);
if(increement<=k){
s.push(valCur+val);
}else{
    s.push(valCur);
}
return increement+1;
    }
    void increment(int k, int val) {
       fn(k,val); 
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */