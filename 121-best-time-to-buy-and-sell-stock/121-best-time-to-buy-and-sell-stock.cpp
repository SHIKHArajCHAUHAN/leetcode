class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0;
        int minn=INT_MAX;
        int index;
        int maxx=INT_MIN;
        for(int i=0;i<n;i++)
        {
           minn=min(minn,prices[i]);
            maxx=max(maxx,prices[i]-minn);
           
        }
        
        return maxx;
    }
};