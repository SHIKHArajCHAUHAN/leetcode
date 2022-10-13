//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        // Code here
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        pq.push({grid[0][0], {0,0}});
        int n = grid.size(), m = grid[0].size();
        
        vector<vector<int>> visited(n, vector<int>(m,0));
        visited[0][0] = 1;
        
        while(!pq.empty()){
            
            int dist = pq.top().first;
            int r = pq.top().second.first;
            int c = pq.top().second.second;
            pq.pop();
            
            
            if(r == n-1 and c == m-1) return dist;
            
            vector<int> dr{-1, 0, 1, 0};
            vector<int> dc{0, 1, 0, -1};
            
            for(int i=0; i<4; i++){
                int nr = r + dr[i];
                int nc = c + dc[i];
                
                if(nr>=0 and nc>=0 and nr<n and nc<m and !visited[nr][nc]){
                    visited[nr][nc] = 1;
                    pq.push({dist + grid[nr][nc], {nr,nc}});
                }
            }
        }
        return -1;
    
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends