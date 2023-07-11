//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<int> FindExitPoint(vector<vector<int>>&matrix){
		// Code here
		 int arr[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
        int i = 0;
        int j = 0;
        int dirn = 0;
       vector<int>ans(2,0);
        while(i<matrix.size()&&j<matrix[0].size()&&i>=0&&j>=0) {
            if(matrix[i][j]==1) {
                matrix[i][j] = 0;
                if(dirn==0)
                dirn = 1;
                else if(dirn==1)
                dirn = 3;
                else if(dirn==2)
                dirn = 0;
                else
                dirn = 2;
            }
            ans[0] = i;
            ans[1] = j;
            i += arr[dirn][0];
            j += arr[dirn][1];
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> matrix[i][j];
		Solution obj;
		vector<int> ans = obj.FindExitPoint(matrix);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends