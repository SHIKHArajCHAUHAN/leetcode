class Solution {
public:
       int dp[201][201];
    int n,m;
    vector<vector<int>> dirs{{0,-1},{0,+1},{-1,0},{+1,0}};  
    int dfs(int i,int j,int prev,vector<vector<int>> &matrix)
    {
        if(i<0 || i>=n || j<0 || j>=m || matrix[i][j]<=prev)
            return 0;
        if(dp[i][j]!=0)
            return dp[i][j];
        for(auto &it:dirs)
        {
            dp[i][j]=max(dp[i][j],dfs(i+it[0],j+it[1],matrix[i][j],matrix)+1);
        }
        return dp[i][j];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        n=matrix.size();
        m=matrix[0].size();
        memset(dp,0,sizeof(dp));
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                maxi=max(maxi,dfs(i,j,-1,matrix));
            }
        }
        return maxi;
    }
};