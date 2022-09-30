class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        int d=n-1;
        vector<vector<int>>ans;
        vector<int>v;
        queue<vector<int>>q;
        q.push({0});
        while(!q.empty())
        {
            v=q.front();q.pop();
            if(v.back()==d)
            {
                ans.push_back(v);
            }
            else
            {
                for(auto i:graph[v.back()])
                {
                    vector<int>v2(v);
                    v2.push_back(i);
                    q.push(v2);
                }
            }
        }
        return ans;
    }
};