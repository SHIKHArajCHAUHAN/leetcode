class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        vector<int>indigree(n+1,0);
        if(edges.size()==0) return {0};
        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
            indigree[i[0]]++;
            indigree[i[1]]++;
        }
       // vector<int>indigree(n,0);
        queue<int>q;
    
        for(int i=0;i<n;i++)
        {
            if(indigree[i]==1)q.push(i);
        }
        
        while(n>2)
        {
            int s=q.size();
            n-=s;
            for(int i=0;i<s;i++)
            {
                auto node=q.front();q.pop();
                for(auto x:adj[node])
                {
                    indigree[x]--;
                    if(indigree[x]==1)q.push(x);
                }
            }
            
        }
        vector<int>v;
        while(!q.empty())
        {
           v.push_back(q.front());
            q.pop();
        }
        return v;
    }
};