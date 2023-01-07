//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
    int ans=0;
    int leftarry[n];
    int rightarry[n];
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
        leftarry[i]=maxi;
    }
    for(int i=n-1;i>=0;i--)
{
        mini=min(mini,arr[i]);
        rightarry[i]=mini;}
    for(int i=1;i<n-1;i++)

    {
        if(leftarry[i-1]<=arr[i] && rightarry[i+1]>=arr[i])
        {
            ans=arr[i];
            return ans;
        }
    }
    return -1;
}