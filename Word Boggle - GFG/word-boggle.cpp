//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    int dx[8]={-1,-1,-1,0,1,1,1,0};
    int dy[8]={-1,0,1,1,1,0,-1,-1};
    bool  dfs(vector<vector<int>>&vis,int r,int c,vector<vector<char> >& board,string str,int ind){
        if(ind==str.size()) return true;
        int n=board.size();
        int m=board[0].size();
        if(r<0||c>=m||c<0||r>=n||vis[r][c]==1||str[ind]!=board[r][c]) return false;
        vis[r][c]=1;
        bool found=false;
        for(int i=0;i<8;i++)
        {
            int nr=r+dx[i];
            int nc=c+dy[i];
            
            if(dfs(vis,nr,nc,board,str,ind+1)) found=true;
            
            
        }
        vis[r][c]=0;
        return found;
        
    }
	vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dictionary) {
	    // Code here
	    vector<string>v;
set<string>s;
	    for(int k=0;k<dictionary.size();k++){
	       vector<vector<int>>vis(board.size(),vector<int>(board[0].size(),0));
	         for(int i=0;i<board.size();i++)
	         {
	             for(int j=0;j<board[0].size();j++)
	             {
	                 if(board[i][j]==dictionary[k][0])
	                 {
	                     if(dfs(vis,i,j,board,dictionary[k],0))
	                     s.insert(dictionary[k]);
	                 }
	             }
	         }
	    }
	    for(auto i:s)
	    {
	        v.push_back(i);
	    }
	    return v;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> dictionary;
        for (int i = 0; i < N; ++i) {
            string s;
            cin >> s;
            dictionary.push_back(s);
        }
        
        int R, C;
        cin >> R >> C;
        vector<vector<char> > board(R);
        for (int i = 0; i < R; i++) {
            board[i].resize(C);
            for (int j = 0; j < C; j++) cin >> board[i][j];
        }
        Solution obj;
        vector<string> output = obj.wordBoggle(board, dictionary);
        if (output.size() == 0)
            cout << "-1";
        else {
            sort(output.begin(), output.end());
            for (int i = 0; i < output.size(); i++) cout << output[i] << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends