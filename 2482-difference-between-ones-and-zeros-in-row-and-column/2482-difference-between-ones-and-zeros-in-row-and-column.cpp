class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>r(n,0),c(m,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                r[i]+=grid[i][j];
                c[j]+=grid[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                grid[i][j]=2*(r[i]+c[j])-n-m;
            }
        }
        return grid;
    }
};