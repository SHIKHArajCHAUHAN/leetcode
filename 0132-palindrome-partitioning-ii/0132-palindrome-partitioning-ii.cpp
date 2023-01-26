class Solution {
    // vector<vector<int>>v(2001,vector<int>(2001,-1));
public:
  /* int v[2001][2001];
     bool ispalindrome(int i, int j, string &s){
     while(i<j){
     if(s[i]!=s[j])return false;
     i++; j--;}
     return true;
 }
    int solve(string s,int i,int j,int &v[][])
    {
        int ans=INT_MAX;
        int n=s.length();
        if(ispalindrome(i,j,s)==true) return 0;
        if(i>j)return 0;
        if(v[i][j]!=-1)return v[i][j];
        for(int k=i;k<=j-1;k++)
        {
            int temp=solve(s,i,k,v)+solve(s,k+1,j,v);
            ans=min(ans,temp);
        }
        return v[n][n]=ans;
    }*/
    int minCut(string s) {
       // memset(v,-1,sizeof(v));
       /* int n=s.length();
       // vector<vector<int>>v;
        for(int i=0;i<2000;i++)
        {
            for(int j=0;j<200;j++)
            {
                v[i][j]=-1;
            }
        }
       ispalindrome(0,s.length(),s) ;
        return solve(s,0,s.length(),v);*/
         vector<int> dp(s.size()+1, 0);
        for(int i=0;i<s.size()+1;i++){
            dp[i] = i-1;
        }
        for(int i=1;i<s.size();i++){
            for(int j=0; i-j>=0 && i+j<s.size() && s[i-j]==s[i+j];j++){
                dp[i+j+1] = min(dp[i+j+1], 1+ dp[i-j]);
            }
            for(int j=0; i-j-1>=0 && i+j<s.size() && s[i-j-1]==s[i+j];j++){
                dp[i+j+1] = min(dp[i+j+1], 1+ dp[i-j-1]);
            }
        }
        
        return dp[s.size()];
    }
};