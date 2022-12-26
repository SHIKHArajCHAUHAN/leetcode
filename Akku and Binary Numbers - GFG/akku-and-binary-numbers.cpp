//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    void precompute()
    {
        // Code Here
        
    }
    
   /* long long fn(long long n)
    {
    long long cnt=0;
        while(n)
        {
            int rsb=n&-n;
            n-=rsb;
            cnt++;
        }
if( cnt==3) return 1; else return 0;
    }*/
    long long solve(long long l, long long r){
        // Code Here
       /* long long cnt=0;
        for(long long i=l;i<=r;i++)
        {
            if(fn(i)) cnt++;
        }
        return cnt;*/
        long long ans=0,a,b,c;
        int i,j,k;
        for(i=log2(l),a=pow(2,i);i<63;i++,a<<=1) {
            for(j=0,b=1;j<i;j++,b<<=1) {
                for(k=0,c=1;k<j;k++,c<<=1) {
                    long long n=a|b|c;
                    if(n>=l && n<=r) {
                        ans++;
                    }
                    else if(n>r) {
                        return ans;
                    }
                }
            }
        }
    }
    
};



//{ Driver Code Starts.

int main()
{
    int t;
    Solution ob;
    ob.precompute();
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        cout << ob.solve(l, r) << endl; 
    }
    return 0;
}
// } Driver Code Ends