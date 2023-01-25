//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  int fn(string a,string b)
  {
      int n=a.length();
      int v[n+1][n+1];
      for(int i=0;i<n+1;i++)
      {
          for(int j=0;j<n+1;j++)
          {
              if(i==0||j==0)
              {
                  v[i][j]=0;
              }
          }
      }
      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=n;j++)
          {
              if(a[i-1]==b[j-1])
              {
                  v[i][j]=1+v[i-1][j-1];
              }
              else v[i][j]=max(v[i-1][j],v[i][j-1]);
          }
      }
      return v[n][n];
  }
    int countMin(string str){
    //complete the function here
    string a=str;
    reverse(a.begin(),a.end());
    return str.length()-fn(str,a);
    
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends