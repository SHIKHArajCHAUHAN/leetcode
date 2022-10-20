//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    vector <vector <int>> binTreeSortedLevels (int arr[], int n)
    {
        // Your code here
        vector<vector<int>>ans;
       queue<int>q;
       int j=0;
       q.push(arr[j++]);
       while(!q.empty()){
           int s=q.size();
           vector<int>v;
           for(int i=0;i<s;i++){
               v.push_back(q.front());
               q.pop();
               if(j<n)q.push(arr[j++]);
             if(j<n)q.push(arr[j++]);
           }
           sort(v.begin(),v.end());
           ans.push_back(v);
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];

        Solution ob;
        
		vector <vector <int>> res = ob.binTreeSortedLevels (arr, n);
		for (int i = 0; i < res.size(); ++i)
		{
			for (int j = 0; j < res[i].size(); ++j)
			{
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
	}
}

// Contributed By: Pranay Bansal
// } Driver Code Ends