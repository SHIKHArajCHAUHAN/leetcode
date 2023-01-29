class Solution {
public:
    int minDistance(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
       vector<vector<int>>v(n1+1,vector<int>(n2+1,0));
        for(int i=0;i<n1+1;i++)
        {
            v[i][0]=i;
        }
         for(int i=0;i<n2+1;i++)
        {
            v[0][i]=i;
        }
        for(int i=1;i<n1+1;i++)
        {
            for(int j=1;j<n2+1;j++)
            {
                if(word1[i-1]==word2[j-1])
                {
                    v[i][j]=v[i-1][j-1];
                }
                else
                {
                    v[i][j]=1+min(v[i-1][j],min(v[i][j-1],v[i-1][j-1]));
                }
            }
        }
        return v[n1][n2];
    }
};