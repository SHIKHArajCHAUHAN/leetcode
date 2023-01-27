//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}
// } Driver Code Ends

int fn(string s1,string s2)
{
    int n=s1.length();
    int v[s1.length()+1][s1.length()+1];
    for(int i=0;i<=n;i++)
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
            else
            {
                v[i][j]=max(v[i][j-1],v[i-1][j]);
            }
        }
    }
    return v[n][n];
}
int minDeletions(string str, int n) { 
    //complete the function here
    string s="";
    for(int i=n-1;i>=0;i--)
    {
        s.push_back(str[i]);
    }
    return n-fn(str,s);
} 