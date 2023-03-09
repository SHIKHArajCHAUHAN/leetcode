//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int maxModValue(int arr[], int n);


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
		{
			cin>>a[i];
		}
		cout<<maxModValue(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends


int maxModValue(int arr[], int n)
{
    sort(arr,arr+n);   //bhut thik
      int ans = 0;
    for(int i =0; i<= n-1; i++){
        for(int j = 2*arr[i] ; j<= arr[i]+arr[n-1] ; j+= arr[i]){
            int ind = lower_bound(arr, arr+n ,j) - arr;
            ans = max(ans , arr[ind-1]%arr[i]);
        }
    }
    return ans;

}

