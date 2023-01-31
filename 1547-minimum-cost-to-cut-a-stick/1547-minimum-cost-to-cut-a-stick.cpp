class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
               int c=cuts.size();

        vector<vector<int>>dp(c,vector<int>(c,0));
        sort(cuts.begin(),cuts.end());
        for(int i=c-1;i>=1;i--)
        {
            for(int j=i;j<=c-2;j++)
            {
                if(i>j)continue;
                int minn=INT_MAX;
                for(int ind=i;ind<=j;ind++)
                {
                    int cost=cuts[j+1]-cuts[i-1]+dp[i][ind-1]+dp[ind+1][j];
                    minn=min(minn,cost);
                }
                dp[i][j]=minn;
                
            }
            
        }
        return dp[1][c-2];
    }
};