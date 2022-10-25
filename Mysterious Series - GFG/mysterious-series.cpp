//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public: bool prime(int n)
    {  
        if(n==0 || n==1)
             return false;
         for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
    long long nthMysterious(long long N){
        // code here
        vector<long long>v;
         long long c=0;
       for(int i=2;i<100000;i++)
       {
           if(prime(i))
           {
               v.push_back(i*i+1);
               c++;
           }
           if(c==N)
           {
               return v[N-1];
           }
       }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.nthMysterious(N) << endl;
    }
    return 0;
}

// } Driver Code Ends