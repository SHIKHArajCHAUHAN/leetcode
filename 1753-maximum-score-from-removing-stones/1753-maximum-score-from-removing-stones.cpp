class Solution {
public:
    int maximumScore(int a, int b, int c) {
     priority_queue<int>pq;
            pq.push(a);
        pq.push(b);
        pq.push(c);
         int count=0;
        while(pq.size()>1)
        {
            auto x=pq.top();
            pq.pop();
            x--;
            
            auto y=pq.top();
            pq.pop();
            y--;
           if(x>0) pq.push(x);
          if(y>0)  pq.push(y);
            count++;
        }
     return count;
    }
};