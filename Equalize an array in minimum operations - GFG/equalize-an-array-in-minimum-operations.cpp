//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalizeArray(int N, int k, int A[]){
        // code here
        int sum=0;
        sort(A,A+N);
        int mid;
          if(N%2==0){
            mid=N/2-1;
            
        }
        else{
            mid=N/2;
            
        }
        // for(int i=0;i<N;i++)
        // {
        //     sum+=abs(A[i]-A[mid]);
        // }
        // if(sum%k!=0)return -1;
        // return sum/k;
       int m=1e9+7;
            for(int i=0; i<N; i++){
            if((abs(A[mid]-A[i]))%k!=0){
                return -1;
            }
            sum=(sum+(abs(A[i]-A[mid])/k))%m;
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, k;
        cin>>N>>k;
        int A[N];
        for(int i = 0; i < N; i++)
            cin>>A[i];
            
        Solution ob;
        cout<<ob.equalizeArray(N, k, A)<<"\n";
    }
    return 0;
}
// } Driver Code Ends