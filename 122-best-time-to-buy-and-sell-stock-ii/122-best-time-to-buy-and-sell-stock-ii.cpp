class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>v;
        int ans;
        for(int i=1;i<prices.size();i++)
        {
        if(prices[i]>prices[i-1])
         ans+=prices[i]-prices[i-1];
        }
           
     return ans;
    }
};