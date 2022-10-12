class Solution {
public:/// count zer0 incomming nodes
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
     /* set<int> node;
        vector<bool> dis(1e5+1);
        for(auto &it:edges) {
            node.insert(it[0]);
            node.insert(it[1]);
            dis[it[1]] = true;
        }
        vector<int> ans;
        for(auto &i: node) {
            if(!dis[i]) ans.push_back(i);
        }
        return ans;  */
        vector<int>v;
        vector<int>indegree(n,0);
       
            for(auto it:edges)
            {
                indegree[it[1]]++;
            }
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
                v.push_back(i);
        }
        return v;
    }
};