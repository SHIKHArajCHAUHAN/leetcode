//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int v[201][201];
    int fn(int n,int k)
    {
            
        if(k==0 || k==1){
            return k;
        }
        
        if(n==1){
            return k;
        }


        if(v[n][k]!=-1){
            return v[n][k];
        }
        
        
        int ans=INT_MAX;
        for(int i=1; i<=k; i++){
            ans=min(ans,1+max(fn(n-1,i-1),fn(n,k-i)));
        }
        
        
        return (v[n][k]=ans);  
    }
    int eggDrop(int n, int k) 
    {
        // your code here
        for(int i=0; i<=n; i++){
            for(int j=0; j<=k; j++){
                v[i][j]=-1;
            }
        }
        
      return fn(n,k);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}

// } Driver Code Ends