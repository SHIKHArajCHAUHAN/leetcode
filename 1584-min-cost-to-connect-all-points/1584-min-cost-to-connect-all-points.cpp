class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int sum=0;
 vector<vector<pair<int,int>>> adj(points.size());
        int n = points.size();
        for(int i=0; i<n; ++i){
            int xi = points[i][0];
            int yi = points[i][1];
            for(int j = i+1; j<n; ++j){
                int xj = points[j][0];
                int yj = points[j][1];
				
                int w = abs(xi-xj) + abs(yi-yj);
                adj[i].push_back({w, j});
                adj[j].push_back({w, i});
            }
        }
    vector<int> vis(n,0);// vis array ko initially 0 daal diya 
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;// cost and node //hoga yha
    pq.push({0,0}); // initially 0 node se suru ke rhe hai jiska cost 0 maaan liya hai
    
    while(!pq.empty())
    {
        auto it = pq.top();
        pq.pop();
        auto node=it.second;
        int wt = it.first;
        if(vis[node]==1) continue;
        vis[node] = 1;
        sum+=wt; 
        for(auto i : adj[node])
        {
            auto adjnode= i.second;
            int ewt = i.first;
            if(vis[adjnode]==0)
                pq.push({ewt,adjnode});
        }
    }
    return sum; 
    }
};