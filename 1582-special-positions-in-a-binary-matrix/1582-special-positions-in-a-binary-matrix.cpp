class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
     vector<int>r(n,0),c(m,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                r[i]+=mat[i][j];
                c[j]+=mat[i][j];
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               if(mat[i][j]==1&&r[i]==1&&c[j]==1)cnt++; 
            }
        }
        return cnt;
    }
};