//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
bool dfs(int r,int c,vector<vector<int>>&vis,vector<vector<char>>& board,string word,int ind)
{
    int n=board.size();
    int m=board[0].size();
    if(ind==word.size()) return true;
    if(r<0||r>=n||c<0||c>=m||vis[r][c]==1||board[r][c]!=word[ind]) return false;

    vis[r][c]=1;
    for(int i=0;i<4;i++)
    {
        int nr=r+dx[i];
        int nc=c+dy[i];
        if(dfs(nr,nc,vis,board,word,ind+1)) return true;
    } vis[r][c]=0;
    return false;
}
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        vector<vector<int>>vis(board.size(),vector<int>(board[0].size(),0));
        for(int i=0;i<board.size();i++)
        {
            //vector<vector<int>>v(board.size(),vector<int>(board[0].size(),0));
          for(int j=0;j<board[0].size();j++)
          {//vector<vector<int>>vis(board.size(),vector<int>(board[0].size(),0));
          
              if((board[i][j]==word[0])&&dfs(i,j,vis,board,word,0)) return true;
              
          }
        }
       return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends