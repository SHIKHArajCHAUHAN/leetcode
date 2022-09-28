class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto i:arr)
        {
            if(pq.size()!=k)
                pq.push(i);
            else if(abs(i-x)<abs(pq.top()-x))
            {
                pq.pop();
                pq.push(i);
            }
        }
        vector<int> v;
        while(pq.size()!=0)
        {
            v.push_back(pq.top());
            pq.pop();
        }
        return v; 
    }
};