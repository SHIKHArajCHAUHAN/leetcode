class Solution {
public:
    bool fn(int src,vector<vector<int>>adj,vector<int>color)
    {
        queue<int>q;
        q.push(src);
        color[src]=1;
        while(!q.empty())
        {
            int node =q.front();
            q.pop();
            for(auto i:adj[node])

            {
              if(color[i]==-1)
              {
                  color[i]=1+color[node];
                  q.push(i);
              }
                else if(color[i]==color[node])
                {
                    return false;
                }
            }
        }
            return true;
    
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
       vector<int>color(n,-1);
     //  memset[color,-1,sizeof color];
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                if(!fn(i,graph,color))
                {
                    return false;
                }
            }
        }
        return true;
    }
};