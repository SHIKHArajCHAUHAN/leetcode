class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum;
        int maxxx=0;
       int m=accounts.size();
        int x=INT_MIN;
      for(int i=0;i<m;i++)
      {sum=0;
          int n=accounts[i].size();
         for(int j=0;j<n;j++)
         {
           sum+=accounts[i][j];

         }
          maxxx=max(maxxx,sum);
          
         
      }
        return maxxx;
    }
};