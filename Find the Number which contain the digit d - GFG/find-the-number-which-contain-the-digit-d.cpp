//{ Driver Code Starts
// CPP program to print the number which
// contain the digit d from 0 to n
#include <bits/stdc++.h>
using namespace std;
vector<int> solve(int n, int d);


int main() {
    int t, n, d;
    cin >> t;
    while (t--) {
        cin >> n >> d;
        vector<int> v = solve(n, d);
        for (auto it : v) cout << it << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends


vector<int> solve(int n, int d)
{
    //code here
    vector<int>v;
    string s=to_string(n);
    string s2=to_string(d);
   for(int i=0;i<=n;i++)
   {
       int numb=i;
       do
       {
           if(numb%10==d)
           {
               v.push_back(i);
               break;
           }
           numb/=10;
       }
       while(numb);
   }
   if(v.size()==0)
   {
       v.push_back(-1);
   }
   return v; 
    
}