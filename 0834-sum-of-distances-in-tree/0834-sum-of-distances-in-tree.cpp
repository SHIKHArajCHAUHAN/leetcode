class Solution {
public:
     int DFS(vector<int> g[], int node, vector<int> &sum, int parent, vector<int> & subtree, int val){
        sum[0] += val, subtree[node] = 1;
        for(auto &n : g[node]){
            if( n != parent ){
                subtree[node] += DFS(g, n, sum, node, subtree, val+1);
            }
        }
        return subtree[node];
    }

    void dfs2(vector<int> g[], int node, vector<int> &sum, int parent, vector<int> & subtree){
        sum[node] = sum[parent] + (subtree[0] - subtree[node]) - subtree[node];
        for(auto &n : g[node]){
            if( n != parent ){
                dfs2(g, n, sum, node, subtree);
            }
        }
    }

    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<int> g[n], sum(n, 0), subtree(n, 0);
        for(auto &edge : edges){
            g[edge[0]].push_back(edge[1]);
            g[edge[1]].push_back(edge[0]);
        }
        DFS(g, 0, sum, -1, subtree, 0);
        for(auto &child : g[0]){
            dfs2(g, child, sum, 0, subtree);
        }
        return sum;
        
    }
};