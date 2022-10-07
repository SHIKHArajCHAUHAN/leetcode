class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
         vector<vector<int>> adj(n); 
        for(auto it:roads){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        vector<int> ans; 
        for(auto i:adj)
        {
            int size=i.size();
            ans.push_back(size);
        }
        sort(ans.begin(), ans.end(), greater<int>());
        long long x=n;
        long long sum=0;
        for(auto it:ans)
        { 
            sum+=(it*x);  
            x--;
        }
        return sum; 
    }
};