//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int fn(int i)
{
    int cnt=0;
    while(i)
    {
        int r=i&-i;
        i-=r;
        cnt++;
    }
    return cnt;
}
    int countBits(int N){
        // code here
      /*  int cnt=0;
        for(int i=1;i<=N;i++)
        {
            cnt+=fn(i);
        }
        return cnt;*/
   int res = 0;
    N+=1;
   for (int i = 0; i <= 32; i++)
   {
       int x = pow(2, i);
       int rem = N % x;
       int a = N / x;
       if (a % 2 == 1)
           res += rem;
       a = (a / 2) * x;
       res += a;
   }
   return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.countBits(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends