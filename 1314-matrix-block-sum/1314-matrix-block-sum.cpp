class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
       int m= mat.size(),n = mat[0].size();
        vector<vector<int>>presum(m,vector<int>(n)),res(m,vector<int>(n));
        presum[0][0] = mat[0][0];
        for(int i=1;i<n;i++)
        {
            presum[0][i] = presum[0][i-1] + mat[0][i];
        }
        for(int i=1;i<m;i++)
        {
            presum[i][0] = presum[i-1][0] + mat[i][0];
        }
        
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                presum[i][j] = presum[i-1][j] + presum[i][j-1] - presum[i-1][j-1] + mat[i][j];  
            }
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int minrow = max(0,i-k);
                int maxrow = min(i+k,m-1);
                int mincol = max(0,j-k);
                int maxcol = min(j+k,n-1);
            int sum=0;
                if(maxrow >=0 && maxcol >= 0)               
                sum += presum[maxrow][maxcol];
                
                if(minrow-1 >= 0 && maxcol >= 0)
                    sum -= presum[minrow-1][maxcol];
                
                if(mincol-1 >= 0 && maxcol >= 0)
                    sum -= presum[maxrow][mincol-1];
                
                if(minrow-1 >= 0 && mincol-1 >= 0)
                    sum += presum[minrow-1][mincol-1];
                
                res[i][j] = sum;
            }
        }
        
        return res; 
    }
};