class Solution {
public:
  /*  int fn(int i,int j,vector<vector<int>>&v)
    {
        if(i==0&j==0) return v[i][j];
        if(i<0||j<0) return INT_MAX;
        int s=v[i][j]+fn(i-1,j,v);
        int up=v[i][j]+fn(i-1,j-1,v);
        int left=v[i][j]+fn(i-1,j+1,v);
        return dp= min(s,min(left,up));
    }*/
    int minFallingPathSum(vector<vector<int>>& matrix) {
      /* int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1);)
       return fn(n-1,m-1,matrix);*/
         int n = matrix.size();
        vector<int> dp;
        dp = matrix[0];
        
        for( int i=1;i<n;i++ ){
            vector<int> temp;
            for( int j=0;j<n;j++ ){
                int upper = dp[j];
                int dLeft=INT_MAX, dRight = INT_MAX;
                if( j>0 ) dLeft = dp[j-1];
                if( j<=(n-2) ) dRight = dp[j+1];
                int path = matrix[i][j] + min( dRight, min(upper, dLeft ) );
                temp.push_back(path);
            }
            dp = temp;
        }
        int ans = INT_MAX;
        for( auto i : dp ){
            ans = min( ans, i );
        }
        return ans;
    }
};