//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int makeProductOne(int arr[], int N) {
        // code here
        int ans=0;
        int zcnt=0,ncnt=0;
        for(int i=0;i<N;i++)
        {
            if(arr[i]>0)
            {
                ans+=arr[i]-1;
                
            }
            else if(arr[i]<0)
            {
                ncnt++;
                ans+=-1-arr[i];
            }
            else
            {
                ans+=1;
                zcnt++;
            }
        }
        if(ncnt%2!=0&&zcnt==0)
        {
            ans+=2;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.makeProductOne(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends