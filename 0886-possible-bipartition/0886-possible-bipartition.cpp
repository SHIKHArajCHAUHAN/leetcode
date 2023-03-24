class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
       vector<int>color(n+1,0);
        vector<int>adj[n+1];
        for(auto i:dislikes)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
    adj[0].push_back(0);
        for(int i=1;i<=n;i++)
        {
            if(color[i]==0){
            queue<int>q;
            q.push(i);
            color[i]=1;
            while(!q.empty())
            {
                int node=q.front();
                q.pop();
                for(auto it:adj[node])
                {
                    if(color[it]==color[node]) return false;
                    if(color[it]==0)
                    {
                        color[it]=-color[node];
                        q.push(it);
                    }
                }
            }
        }
        }
        return true;
    }
};