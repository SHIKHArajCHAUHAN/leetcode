class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
     int sum=0;
        int n=mat.size();
        int total=mat.size()*mat[0].size();
        int m=mat[0].size();
      for(int i=0;i<mat.size();i++)
      {
          for(int j=0;j<mat[0].size();j++)
          {
              if(j==i)
             sum+=mat[i][j]; 
           if(j+i==m-1)
                sum+=mat[i][j];
             
          }
          
      }
        if(n%2!=0)
            sum-=mat[n/2][n/2];
        return sum;
        
        
        
    }
};