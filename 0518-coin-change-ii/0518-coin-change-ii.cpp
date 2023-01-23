class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int v[coins.size()+1][amount+1];
        int n=coins.size();
    
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<amount+1;j++)
            {
                if(i==0) v[i][j]=0;
                              if(j==0) v[i][j]=1;
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<amount+1;j++)
            {
                if(coins[i-1]<=j)
                {
                    v[i][j]=v[i][j-coins[i-1]]+v[i-1][j];
                }
                else
                {
                    v[i][j]=v[i-1][j];
                }
            }
        }
        return v[n][amount];
    }
};