class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
          vector<int> ans;
        int m=grid[0].size();
        int n=grid.size();
        for(int i=0;i<m;i++){
            int res=INT_MIN;
            for(int j=0;j<n;j++){
                string s=to_string(grid[j][i]);
                int x=s.size();
                res=max(res,x);
                
            }
            ans.push_back(res);
        }
        return ans;
    }
};