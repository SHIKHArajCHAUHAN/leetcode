//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
 string minimumLuckyNumber(int N) {
        // code here
int c=0;
string r="";
int n=N;
while(n>0)
{
if(n%7==0)
{r+='7';
n=n-7;
c=1;}
else
{r+='4';
n=n-4;
}
if(n==0)
return r;
}
if(c==0)
return "-1";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.minimumLuckyNumber(N) << "\n";
    }
}

// } Driver Code Ends