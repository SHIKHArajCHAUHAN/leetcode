class Solution {
public:  ///nyc concept 
  vector<double>res;
    unordered_map<string,vector<pair<string,double>>>mp;
    unordered_set<string>s;
    void dfs(string src ,string dst,double &ans,unordered_map<string,int>&vis,double temp)
    {
        if(vis[src]==1) return;
        if(src == dst){ ans = temp; return;}
        auto i = mp[src];
        vis[src]=1;
        for(auto j : i) dfs(j.first,dst,ans,vis,temp*j.second);
        return;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries)
    {
        res.clear();
        mp.clear();
        s.clear();
        int n = equations.size();
        for(int i=0;i<n;i++)
        {
            mp[equations[i][0]].push_back({equations[i][1],values[i]});
            mp[equations[i][1]].push_back({equations[i][0],1.0/values[i]});
            s.insert(equations[i][0]);
            s.insert(equations[i][1]);
        }
        int q = queries.size();
        for(int i=0;i<q;i++)
        {
            double ans = -1.0;
            double temp = 1;
            unordered_map<string,int>visited;
        if(s.find(queries[i][0])!=s.end() || s.find(queries[i][1])!=s.end())
            dfs(queries[i][0],queries[i][1],ans,visited,temp);
        res.push_back(ans);
        }
        return res;
    }
};