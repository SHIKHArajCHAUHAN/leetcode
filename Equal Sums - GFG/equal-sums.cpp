//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    vector<int> EqualSum(int a[], int n)
    {
        // Complete the function
        int i=0;
       int j = n-1;
       int sum1 = 0;
       int sum2 = a[j];
        if (n == 1)
            return {a[0],2,2};
       while (i < j){
            if (sum1 < sum2)
               { sum1+=a[i];
                i+=1;}
            else{
                j-=1;
                sum2+=a[j];
            }
                
       }
        if (sum1 > sum2)
            return {sum1-sum2,j+1,2};
        else
            return {sum2-sum1,i+1,1};
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
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    vector<int> v;
	    v = ob.EqualSum(arr, n);
	    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
	}
	return 0;
}
// } Driver Code Ends