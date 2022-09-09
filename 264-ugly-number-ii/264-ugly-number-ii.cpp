class Solution {
public:
    int nthUglyNumber(int n) {
     priority_queue<long long int ,vector<long long int>,greater<long long int>> pq;
        pq.push(1);
        n--;
        while(n>0)
        {
            long long int k=pq.top();
            pq.push(k*2);
            pq.push(k*3);
            pq.push(k*5);
            pq.pop();
            while(pq.top()==k) pq.pop();
            n--;
        }
        return pq.top();
        
    }
}; 