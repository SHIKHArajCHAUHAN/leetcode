//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    vector<int> smallestDifferenceTriplet(int arr1[], int arr2[], int arr3[], int n)
    {
        //code here.
           vector<int>ans;
        int i=0,j=0,k=0;
        sort(arr1,arr1+n);
        sort(arr2,arr2+n);
        sort(arr3,arr3+n);
        int mindiff=INT_MAX;
        while(i<n and j<n and k<n){
            int mini=min({arr1[i],arr2[j],arr3[k]});
            int maxx=max({arr1[i],arr2[j],arr3[k]});
            int diff=maxx-mini;
            if(diff<mindiff){
                mindiff=diff;
                ans={arr1[i],arr2[j],arr3[k]};
            }
            if(mini==arr1[i]){
                i++;
            }
            else if(mini==arr2[j]){
                j++;
            }
            else{
                k++;
            }
        }
        sort(ans.begin(),ans.end(),greater<int>());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n],c[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		for(int i=0;i<n;++i)
			cin>>b[i];
		for(int i=0;i<n;++i)
			cin>>c[i];
		
		Solution ob;	
		vector<int> ans=ob.smallestDifferenceTriplet(a,b,c,n);
		cout<< ans[0] <<" "<<ans[1]<<" "<<ans[2] << endl;
	}
	return 0;
}

// } Driver Code Ends