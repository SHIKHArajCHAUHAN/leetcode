class Solution {
public:
        
   int solve(int i, int j, vector<vector<int>> &v, vector<vector<int>> &dp){
    
	//base cases
    if(i>=0 and j>=0 and v[i][j] == 1) return 0;  
    if(i ==0 and j ==0) return 1;  
    if(i<0 || j<0) return 0; 
    if(dp[i][j] != -1) return dp[i][j];  
    
	//recursion
    int up = solve(i-1, j, v, dp);  
    int left = solve(i, j-1, v, dp);
    
    return dp[i][j] = up + left;
}



int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int m = obstacleGrid.size(), n = obstacleGrid[0].size();
    vector<vector<int>> dp(m, vector<int> (n, -1));
    return solve(m-1, n-1, obstacleGrid, dp);
}
};
/* int fn(int i,int j,vector<vector<int>>&v,vector<vector<int>>dp)
    {
     if(i>=0&&j>=0&& v[i][j]==-1) return 0;
        if(i==0&&j==0) return 1;
        if(i<0||j<0) return 0;
     if(dp[i][j]!=-1) return dp[i][j];
        int up=fn(i-1,j,v,dp);
        int left=fn(i,j-1,v,dp);
        return dp[i][j]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
     int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
       vector<vector<int>>dp(n,vector<int>(m,-1));
       /* int dp[n][m];
        for(int i=0;i>n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(obstacleGrid[i][j]==-1) dp[i][j]=0;
                else if(i==0&&j==0) dp[i][j]=1;
                else
                {
                    int up=0;int left=0;
                    if(i>0) up=dp[i-1][j];
                    if(j>0) left=dp[i][j-1];
                    dp[i][j]=up+left;
                }
            }
        }
      return  dp[n-1][m-1];
      // *///return fn(n-1,m-1,obstacleGrid,dp);
 /*   }
};*/
/*vector<vector<int>>dp(m,vector<int>(n,-1));
       for(int i=0;i<n;i++)
       {
         dp[0][i]=1;  
       }
        for(int i=0;i<m;i++)
        {
            dp[i][0]=1;
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];*/