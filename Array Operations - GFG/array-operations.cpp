//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        // code here
        int c1=0;//can be done by using flag
        for(int i=0;i<n;i++){
            if(arr[i]==0) c1++;
        }
        if(c1==n) return 0;
        int c=0;
        for(int i=1;i<n;i++){
            if(arr[i]==0 && arr[i-1]!=0) c++;
        }
        if(c==0) return -1;
        int ans=0,subarray=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
                subarray++;
            else if(subarray!=0)
            {
                ++ans;
                subarray=0;
            }
        }
        if(subarray!=0)
            ans++;
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends