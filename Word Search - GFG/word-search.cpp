//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
  vector<int> dx={1,-1,0,0};
    vector<int> dy={0,0,1,-1};
    bool dfs(vector<vector<char>> &board, int x, int y, string &word, int idx){
           int n=board.size(), m=board[0].size();
        if(idx==word.length()){
            return true;
        }
        if(word[idx]!=board[x][y]){
            return false;
        }
        char temp=board[x][y];
        board[x][y]='/';
        for(int i=0;i<4;i++){
            int nx=x+dx[i], ny=y+dy[i];
            
            if(nx>=0 && ny>=0 && nx<board.size() && ny<board[0].size() && dfs(board,nx,ny,word,idx+1)){
                board[x][y]=temp;
                return true;
            }
        }
        board[x][y]=temp;
        return false;
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
          int n=board.size(), m=board[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(dfs(board,i,j,word,0)){
                    return true;
                }
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