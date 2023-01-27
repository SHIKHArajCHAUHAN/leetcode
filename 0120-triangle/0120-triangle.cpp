class Solution {
public:
   /* int fn(int i,int j,vector<vector<int>>&t)
    {
        if(i==t.size())return 0;
            return min(fn(i+1,j,t),fn(i+1,j+1,t))+t[i][j];
    }*/
    int minimumTotal(vector<vector<int>>& triangle) {
      int n=triangle.size();
        vector<int>v(triangle[n-1].begin(),triangle[n-1].end());
        for(int i=n-2;i>=0;i--)
        {
          for(int j=0;j<triangle[i].size();j++)
          {
              v[j]=min(v[j+1],v[j])+triangle[i][j];
          }
        }
        return v[0];
    
    }
};