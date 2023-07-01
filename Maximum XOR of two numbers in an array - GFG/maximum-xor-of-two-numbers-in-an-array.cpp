//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int max_xor(int arr[] , int n)
    {
        //code here
        //  int val = 0;
        // int maxx =INT_MIN;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         val = arr[i]^arr[j];
        //         maxx = max(maxx,val);
        //         val=0;
        //     }
           
        // }
        // return maxx;
            int max = 0, mask = 0;
        for(int i = 31; i >= 0; i--){
            mask = mask | (1 << i);
            set<int> sett;
            for(int num=0;num<n;num++){
                sett.insert(arr[num] & mask);
            }
            int tmp = max | (1 << i);
            for(int prefix : sett){
                if(sett.find(tmp ^ prefix)!=sett.end()) {
                    max = tmp;
                    break;
                }
            }
        }
        return max;
    }
    
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

        Solution ob;
		cout << ob.max_xor(a, n) << endl;

	}
}



// } Driver Code Ends