//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int swapBitGame(long long N){
        // code here 
    int cnt=0;
    while(N)
    {
       /* int rsb=N&-N;
        N-=rsb;
        cnt++;*/
        if(N&1)cnt++;
        N>>=1;
    }
    if(cnt%2==0 ) return 2;
    else return 1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.swapBitGame(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends