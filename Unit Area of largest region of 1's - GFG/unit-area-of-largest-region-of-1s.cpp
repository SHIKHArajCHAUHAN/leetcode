//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    void dfs(vector<vector<int>>& grid, int row, int col, int &count)
{
        int n = grid.size(), m = grid[0].size();
        if(row<0 || row>=n || col<0 || col>=m || grid[row][col] == 0)

            return;
        grid[row][col] = 0;

        count++;
        int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};

        int dy[] = {0, 0, 1, -1, -1, 1, -1, 1};

        for(int k=0; k<8; k++)

            dfs(grid, row+dx[k], col+dy[k], count);

    }
    //Function to find unit area of the largest region of 1s.
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
         int n = grid.size(), m = grid[0].size(), ans = 0;
        for(int i=0; i<n; i++)
           {
            for(int j=0; j<m; j++)
              {
                if(grid[i][j] == 1){
                 {  int count = 0;

                    dfs(grid, i, j, count);

                    ans = max(ans, count);
                 }
                }
               }
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
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends