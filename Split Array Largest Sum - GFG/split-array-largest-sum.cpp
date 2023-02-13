//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int fn(int arr[],int mid,int n)
  {
    int sum=0;
    int cnt=1;
    for(int i=0;i<n;i++)
    {
       if(sum+arr[i]>mid){sum=arr[i] ;
       cnt++;}
       else {
           sum+=arr[i];
       }
    }
    return cnt;
  }
    int splitArray(int arr[] ,int N, int K) {
        // code here
        /*int low=INT_MIN;
        int high;
        for(int i=0;i<N;i++)
        {
            high+=arr[i];
            low=max(low,arr[i]);
        }
        int ans=low;
        while(low<=high)
        {
            int mid=(high+low)/2;
            int n=fn(arr,mid,N);
            if(N<n)low=mid+1;
            else{
                ans=mid;
                high=mid-1;
            }
            
        }
        return ans;*/
         int l=0,r=0;
        for(int i=0;i<N;i++)
        {
             l=max(l,arr[i]);
             r+=arr[i];
        }
        int ans;
        while(l<=r)
        {
             int mid=(l)+(r-l)/2;
             int c=1;
            int sum=0;
            for(int i=0;i<N;i++)
            {
                 if(sum+arr[i]<=mid)
                 {
                      sum+=arr[i];
                 }
                else
                {
                    sum=arr[i];
                    c++;
                }
            }
            if(c<=K)
            {
                ans=mid;
                r=mid-1;
            }
            else
                l=mid+1;
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends