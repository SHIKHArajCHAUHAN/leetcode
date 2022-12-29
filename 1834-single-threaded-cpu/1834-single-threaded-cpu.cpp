class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq1;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq2;  
         vector<int> res;
        for (int i = 0; i < tasks.size(); i++)
        {
            pq1.push({tasks[i][0], i});
        }
        
        long long now = pq1.top().first; 
        while (!pq1.empty() || !pq2.empty())
        {
            while (!pq1.empty() && pq1.top().first <= now)
            {
                int index = pq1.top().second;
                pq2.push({tasks[index][1], index});
                pq1.pop();
            }
            if (!pq2.empty())
            {
                res.push_back(pq2.top().second);
                now = now + pq2.top().first;
                pq2.pop();
            }
         else
            {
                now = pq1.top().first;
            }
        }
        
        return res;  
    }
};