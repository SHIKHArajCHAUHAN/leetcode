class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
       int v[coins.size()+1][amount+1];
        int n=coins.size();
    
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<amount+1;j++)
            {
                if(i==0) v[i][j]=INT_MAX-1;
                              if(j==0) v[i][j]=0;
            }
        }
        for(int i=0;i<n+1;i++)
        {
        for(int j=1;j<amount+1;j++)
        {
            if(j%coins[0]==0)
                v[i][j]=j/coins[0];
            else
            v[i][j]=INT_MAX-1;
        }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<amount+1;j++)
            {
                if(coins[i-1]<=j)
                {
                    v[i][j]=min(1+v[i][j-coins[i-1]],v[i-1][j]);
                }
                else
                {
                    v[i][j]=v[i-1][j];
                }
            }
        }
        if(v[n][amount]==INT_MAX-1)return -1;
        return v[n][amount];
    }  
};