//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    vector<int> farNumber(int N,vector<int> Arr){
        //code here
        vector<int>suf(N);
        vector<int>v;
    suf[N-1]=Arr[N-1];
    for(int i=N-2;i>=0;i--)
    {
        if(Arr[i]<suf[i+1])
        suf[i]=Arr[i];
        else suf[i]=suf[i+1];
    }
    for(int i=0;i<N;i++)
    {
    int low=i+1;
    int high=N-1;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(suf[mid]<Arr[i])
        {
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    v.push_back(ans);
    }
    return v;
    }
};

//{ Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++)
            cin>>Arr[i];
        Solution obj;
        vector<int> answer=obj.farNumber(N,Arr);
        for(auto i:answer)
            cout<<i<<" ";
        cout<<endl;
  }
}
// } Driver Code Ends