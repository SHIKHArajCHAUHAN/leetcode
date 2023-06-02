//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
//   int dx[4] = {-1,1,0,0};
//             int dy[4] = {0,0,-1,1};int step=0;
// void dfs(int r,int c,vector<vector<int>>&hospital,int step, vector<vector<int>>vis)
// { 
//     int n=hospital.size(),m=hospital[0].size();
//     if(r<0||r>=n||c<0||c>=m||vis[r][c]==1)return ;
//     vis[r][c]=1;
//     for(int i=0;i<4;i++)
//     {
//         int nr=r+dx[i];
//         int nc=c+dx[i];
//         if(nr>=0&&nr<n&&nc>=0&&nc<m&&vis[nr][nc]==0&&hospital[nr][nc]==1)
//         {
//              hospital[nr][nc]=2;
//             dfs(nr,nc,hospital,step+1,vis);
//         }
//     }
// }
//     int helpaterp(vector<vector<int>> hospital)
//     {
//         //code here
//         int n=hospital.size(),m=hospital[0].size();
//               vector<vector<int>>vis(n,vector<int>(m,0));int ans=0;
//       for(int i=0;i<n;i++)
//       {
//           for(int j=0;j<m;j++)
//           {
//               if(hospital[i][j]==2&&vis[i][j]==0)
//               {
//                   step=0;
//                   dfs(i,j,hospital,step,vis);
//                   ans=max(step,ans);
                   
//               }
//           }
//       }
//         return ans;
//     }
            int dx[4] = {-1,1,0,0};
            int dy[4] = {0,0,-1,1};
 int helpaterp(vector<vector<int>> hospital)
    {
        int n = hospital.size();
        int m = hospital[0].size();
        int cnt1 = 0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(hospital[i][j]==0) vis[i][j]==0;
                else if(hospital[i][j]==1) cnt1++;
                else{
                    vis[i][j] = 1;
                    q.push({{i,j},0});
                }
        int cnt = 0;
        int ans = 0;
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int x = it.first.first;
            int y = it.first.second;
            int step = it.second;
            ans = step;
            for(int i=0;i<4;i++){
                int nx = x+dx[i];
                int ny = y+dy[i];
                if(nx>=0 && nx<n && ny>=0 && ny<m && !vis[nx][ny] && hospital[nx][ny]){
                    cnt++;
                    vis[nx][ny] = 1;
                    q.push({{nx,ny},step+1});
                }
            }
        }
        if(cnt!=cnt1) return -1;
        return ans;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int R;int C;
        
        cin>>R>>C;
        vector<vector<int>> hospital;
        int i,j;
        for(i=0;i<R;i++)
         {   vector<int> temp;
             for(j=0;j<C;j++)
            {
                int k;
                cin>>k;
                temp.push_back(k);
            }
            hospital.push_back(temp);
         }
        
        Solution ob;
        int ans = ob.helpaterp(hospital);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends