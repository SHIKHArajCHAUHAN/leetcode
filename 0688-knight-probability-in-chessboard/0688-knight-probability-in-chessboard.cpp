class Solution {
public:
    int dx[8]={-2,-1,1,2,2,1,-1,-2};
    int dy[8]={1,2,2,1,-1,-2,-2,-1};
    double dfs(int r,int c,int k,int n,vector<vector<vector<double>>>&dp)
    {
        if(r<0 or c<0 or c>=n or r>=n) return 0;
        if(k==0) return 1;
        if(dp[r][c][k]!=-1) return dp[r][c][k];
        double sum=0;
        for(int i=0;i<8;i++)
        {
            int nr=r+dx[i];
            int nc=c+dy[i];
            if(nr<0 or nc<0 or nc>=n and nr>=n) 
                continue;
            sum += dfs(nr,nc,k-1,n,dp);
        }
        
        return dp[r][c][k] = sum/8;
    }
    
    double knightProbability(int n, int k, int row, int column) {
        
        vector<vector<vector<double>>>dp(n+1, vector<vector<double>>(n+1, vector<double>(k+1,-1)));
        return dfs(row,column,k,n,dp);
    }
};