//{ Driver Code Starts

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public:
    long long evenFibSum(int N){
        // code here
       long a=1;
       long b=1;
       long c=1;
       long sum=0;
       long mod=1000000007;
       while(c<=N){
           c=(a+b)%mod;
           if(N>=c && c%2==0){
               sum+=c;
           }
           a=b;
           b=c;
       }
       return sum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenFibSum(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends