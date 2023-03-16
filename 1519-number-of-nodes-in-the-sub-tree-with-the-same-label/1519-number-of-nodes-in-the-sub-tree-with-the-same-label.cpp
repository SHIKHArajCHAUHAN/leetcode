class Solution {
public:
    vector<int>fn(string &labels,vector<int>&ans,vector<int>adj[],int node,int par)
    {
        vector<int>cnt(26,0);
        for(auto x:adj[node])
        {
            if(x!=par){
            auto temp=fn(labels,ans,adj,x,node);
            for(int i=0;i<26;i++)
            {
                cnt[i]+=temp[i];
            }
            }
        }
        int index=labels[node]-'a';
        cnt[index]++;
        ans[node]=cnt[index];
        return cnt;
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<int>ans(n,0);
        vector<int>adj[n];
        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
             adj[i[1]].push_back(i[0]);
        }
        fn(labels,ans,adj,0,-1);
        return ans;
        
    }
};