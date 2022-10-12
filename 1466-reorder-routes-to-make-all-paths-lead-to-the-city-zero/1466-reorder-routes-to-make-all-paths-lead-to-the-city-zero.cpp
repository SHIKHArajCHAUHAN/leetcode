class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
       /* vector<int>ind(n,0);
        for(auto i:connections)
        {
            ind[i[0]]++;
        }
        int cnt=0;
       // sort(ind.begin(),ind.end());
        ind[0]=0;
        for(int i=0;i<n;i++)
        {
            if(ind[i]!=0) cnt++;
        }
        return cnt;*/
        vector<vector<pair<int, int>>> adj(n);
        for(auto i : connections)
        {
            adj[i[0]].push_back(make_pair(i[1],1));
            adj[i[1]].push_back(make_pair(i[0],0));           
        }
    
        vector<int> vis(n, 0);
        
        int cnt = 0;
        queue<int> q;
        q.push(0);
        vis[0] = 1;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            for(auto i : adj[node])
            {
                if(vis[i.first] == 0)
                {
                    if(i.second == 1)
                        cnt++;
                    q.push(i.first);
                    vis[i.first] = 1;
                }
            }
        }
        return cnt;
    }
};