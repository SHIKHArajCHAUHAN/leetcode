class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        if(n==1) return s;
        string str="";
   vector<vector<int>>dp(n,vector<int>(n,0));
   int maxlen=1;
for(int diff=0;diff<n;diff++)
{
    for(int i=0,j=i+diff;j<n;i++,j++)
    {
        if(i==j)
        {
            dp[i][j]=1;
            
        }
        else if(diff==1)
        {
            if(s[i]==s[j])
            dp[i][j]=2;
            else dp[i][j]=0;
        }
        else
        {
            if(s[i]==s[j]&&dp[i+1][j-1])
            {
                dp[i][j]=dp[i+1][j-1]+2;
            }
        }
        if(dp[i][j]){
        if((j-i+1)>maxlen)
        {
            maxlen=j-i+1;
            str=s.substr(i,maxlen);
        }
        }
    }
}
        if(maxlen==1)return s.substr(n-1,1);
   else return str;  
    }
};