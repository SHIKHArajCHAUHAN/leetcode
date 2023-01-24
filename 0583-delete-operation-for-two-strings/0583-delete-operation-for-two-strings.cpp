class Solution {
public:
    int minDistance(string word1, string word2) {
       int n=word1.length();
        int m=word2.length();
        int v[n+1][m+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0||j==0)
                    v[i][j]=0;
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(word1[i-1]==word2[j-1])
                    v[i][j]=1+v[i-1][j-1];
                else
                    v[i][j]=max(v[i-1][j],v[i][j-1]);
            }
        }
        return n+m-2*v[n][m];
    }
};