//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
   void dfs(int row,int col,vector<vector<int>>&ans,vector<vector<int>>& image,int delRow[],int delCol[],int iniColor,int color){
        ans[row][col]=color;
        int m=image.size();
        int n=image[0].size();
        for(int i=0;i<4;i++){
            int nrow=row + delRow[i];
            int ncol=col + delCol[i];
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && ans[nrow][ncol]!=color && image[nrow][ncol]==iniColor){
                dfs(nrow,ncol,ans,image,delRow,delCol,iniColor,color);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        vector<vector<int>>v=image;
          int iniColor=image[sr][sc];
        int delRow[]={-1,0,+1,0};
        int delCol[]={0,+1,0,-1};
        dfs(sr,sc,v,image,delRow,delCol, iniColor, newColor);
        return v;;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends