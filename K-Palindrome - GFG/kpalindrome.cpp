//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


bool is_k_palin(string s,int k);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		string s ;
		cin>>s;
		int k;
		cin>>k;
		
		cout<<is_k_palin(s,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function*/
bool is_k_palin(string s,int k)
{
//Your code here
string S = s;
reverse(S.begin(),S.end());
int n = s.size();
int t[n+1][n+1];
for(int i=0;i<=n;i++)
{
t[0][i]=0;
t[i][0]=0;
}
for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
{
if(S[i-1]==s[j-1])
{
t[i][j] = t[i-1][j-1] + 1;
}
else
{
t[i][j] = max(t[i-1][j] , t[i][j-1]);
}
}
}
return (n-t[n][n]<=k)?1:0;
}