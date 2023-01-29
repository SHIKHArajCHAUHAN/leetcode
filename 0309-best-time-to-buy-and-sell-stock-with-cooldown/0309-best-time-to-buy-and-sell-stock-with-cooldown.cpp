class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>v(n+2,vector<int>(2,0));
        for(int i=n-1;i>=0;i--)
        {
            v[i][1]=max(-prices[i]+v[i+1][0],v[i+1][1]);
            v[i][0]=max(prices[i]+v[i+2][1],v[i+1][0]);
        }
        return v[0][1];
    }
};