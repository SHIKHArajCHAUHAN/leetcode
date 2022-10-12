class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
      set<int> node;
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
        return ans;  
    }
};