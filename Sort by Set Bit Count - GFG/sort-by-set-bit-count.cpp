//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int fn(int N)
    {
        int cnt=0;
        while(N)
        {
            int r=N&-N;
            N-=r;
            cnt++;
        }
        return cnt;
    }
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        multimap<int,int,greater<int>>mp;
        for(int i=0;i<n;i++)
        {
        int cnt=fn(arr[i]);
    mp.insert({cnt,arr[i]});}
    int i=0;
    for(auto it:mp)
    {
        arr[i]=it.second;
        i++;
    }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends