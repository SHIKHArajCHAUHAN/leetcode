//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        // Code here
        // int cnt=0;
        // for(int i=0;i<n/2;i++)
        // {
        //     for(int j=n/2;j<n;j++)
        //     {
        //         if(arr[i]>=5*arr[j])cnt++;
        //         else continue;
        //     }
        // }
        // return cnt;
        // int cnt=0;
        // sort(arr.begin()+n/2,arr.end());
        // for(int i=0;i<n/2;i++)
        // {
        //     int low=n/2;int high=n-1;
        //     while(low<=high)
        //     {
        //         int mid=(low+high)/2;
        //         if(arr[i]<5*arr[mid])
        //         {
        //             high=mid-1;
        //         }
        //         else
        //         {
        //             cnt+=(n/2-mid);
        //             break;
        //         }
        //     }
            
        // }
        // return cnt;
        
        sort(arr.begin(), arr.begin()+n/2);
        sort(arr.begin()+n/2, arr.end());
        
        int i=0 ,j= n/2;
        int ans=0;
        
        while(i< n/2 and j<n ){
            if(arr[i]>= 5*arr[j]){
                ans+=n/2-i;
                j++;
            }
            else
            i++;
        }
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
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends