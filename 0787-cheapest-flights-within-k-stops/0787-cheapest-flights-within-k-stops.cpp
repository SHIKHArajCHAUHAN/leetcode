class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
       vector<pair<int,int>>adj[n];
        for(auto it:flights)
        {
            adj[it[0]].push_back({it[1],it[2]});
        }
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}});
        vector<int>dis(n,INT_MAX);
        dis[src]=0;
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            int stops=it.first;
            int node=it.second.first;
            int cost=it.second.second;
            if(stops>k)continue;
            for(auto i:adj[node])
            {
                int adjnode=i.first;
                int ew=i.second;
                if(cost+ew<dis[adjnode]&&stops<=k)
                {
                    dis[adjnode]=cost+ew;
                    q.push({stops+1,{adjnode,cost+ew}});
                }
            }
        }
        if(dis[dst]==INT_MAX) return -1;
        return dis[dst];
        
    }
};