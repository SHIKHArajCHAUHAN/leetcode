//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxGroupSize(int arr[], int N, int K) {
        // code here
        ///remender ka sum k se divisible hoga to o pura sum k se se devisible hoga
          map<int,int>mp;
        for(int i=0;i<N;i++){

            arr[i]=arr[i]%K;

            mp[arr[i]]++;
}
        int maxx=0;
        for(int i=1;i<(K+1)/2;i++){

            maxx+=max(mp[K-i],mp[i]);

        }
        if(mp[K/2]>0 && K%2==0){
            maxx+=1;
        }
        if(mp[0]>0){

            maxx+=1;

        }

        return maxx;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.maxGroupSize(arr,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends