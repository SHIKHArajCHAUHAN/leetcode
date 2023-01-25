class Solution {
public:
    int fn(string s1,string s2)
    {
        int n=s1.length();
       int v[n+1][n+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(i==0||j==0)
                    v[i][j]=0;
            }
        }
          for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
               if(s1[i-1]==s2[j-1])
               {
                   v[i][j]=1+v[i-1][j-1];
               }
                else v[i][j]=max(v[i-1][j],v[i][j-1]);
            }
        }
        return v[n][n];
    }
    int longestPalindromeSubseq(string s) {
        int n=s.length();
        string b;
        for(int i=n-1;i>=0;i--)
        {
            b.push_back(s[i]);
        }
        return fn(s,b);
    }
};