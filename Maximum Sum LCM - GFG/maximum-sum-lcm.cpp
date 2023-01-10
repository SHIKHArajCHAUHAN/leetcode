//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long int maxSumLCM(int n) 
    {
        // code here
        long long int sum=0;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                sum+=i;
                if(i!=n/i)//agr sq nhi hai to 25 =5*5;but hme distinct lena h ek barr 5 aa gya mtlb dusre baar nhi
                {
                    sum+=n/i;
                }
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n;
        cin >> n ;
        Solution ob;
        cout<<ob.maxSumLCM(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends