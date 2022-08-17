class Solution {
public: int fn(int i,int j,vector<vector<int>>&dp)
{
if(i<0||j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(i==0&&j==0) return 1;
    else
    {
        dp[i][j]=fn(i-1,j,dp)+fn(i,j-1,dp);
    }return dp[i][j];
}
    int uniquePaths(int m, int n) {
    //  return fn(m-1,n-1);  
        vector<vector<int>>dp(m,vector<int>(n,-1));
              return fn(m-1,n-1,dp);  

    }
};