//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int dx[4]={-1,0,1,0};
   int dy[4]={0,1,0,-1};
   void dfs( vector<vector<char>>&mat,vector<vector<char>>&auxmat,int i,int j,int n,int m, vector<vector<int>>&vis)
   {
       auxmat[i][j]='O';
       vis[i][j]=1;
       for(int k=0;k<4;k++)
       {
           int nr=i+dx[k];
           int nc=j+dy[k];
           if(nr>=0&&nc>=0&&nr<n&&nc<m&&mat[nr][nc]=='O'&&vis[nr][nc]==0)
           {
               dfs(mat,auxmat,nr,nc,n,m,vis);
               vis[nr][nc]=1;
               auxmat[nr][nc]='O';
           }
       }
   }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        vector<vector<char>>auxmat(n,vector<char>(m,'X'));
         vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0||j==0||i==n-1||j==m-1)
                {
                    if(mat[i][j]=='O'&&vis[i][j]==0)
                    {
                        dfs(mat,auxmat,i,j,n,m,vis);
                    }
                }
            }
        }
        return auxmat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends