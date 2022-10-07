class Solution {
public:
    void dfs(int node ,vector<int> adjls[],vector<int>&vis)
    {
        vis[node]=1;
        for(auto it:adjls[node])
        {
            if(!vis[it])
                dfs(it,adjls,vis);
        }
        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>adjls[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1&&i!=j)
                {
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
       // int vis[n]={0};
        vector<int>vis(n,0);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                cnt++;
                dfs(i,adjls,vis);
            }
        }
        return cnt;
    }
};