//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int count(int N){
        // code here
    //   int cnt=0;
    //     for(int i=1;i<=sqrt(N);i++)
    //     {
    //         if(N%i==0)
    //         {
    //           if(i%2==1)cnt++;
    //           if(N%(N/i)==0)
    //           {
    //               if((N/i)%2==1)cnt++;
    //           }
    //         }
    //     }
    //     return cnt;
     return (sqrt(N));  
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
        cout << ob.count(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends