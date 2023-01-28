class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int n=prices.size();
        vector<vector<vector<int>>>v(n+1,vector<vector<int>>(2,vector<int>(3,0)));
                                     for(int i=n-1;i>=0;i--)
                                     {
                                         for(int buy=0;buy<=1;buy++)
                                         {
                                             for(int cap=1;cap<=2;cap++)
                                             {
                                                 if(buy==1)
                                                 {
                v[i][buy][cap]=max(-prices[i]+v[i+1][0][cap],v[i+1][1][cap]);                   
                                                }
                                                 else
                                                 {
v[i][buy][cap]=max(prices[i]+v[i+1][1][cap-1],v[i+1][0][cap]);
                                                 }
                                             }
                                         }
                                     } 
         return v[0][1][2];                            
                        
    }
};