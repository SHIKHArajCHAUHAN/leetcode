#define lln long long int
#define mod 1000000007
class Solution {
public:
    int countPaths(vector<vector<int>>& g) {
        int n=g.size();
        int m=g[0].size();
        vector<vector<lln>>vis(n,vector<lln>(m,0));   
        lln ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0){          
                  dfs(g,i,j,n,m,vis);
                }
            }
        }
        for(int i=0;i<n;i++){   
            for(int j=0;j<m;j++){
                ans=(ans%mod+vis[i][j]%mod)%mod;
            }
        }
        return ans;
        
    }
    private: int dfs(vector<vector<int>>& g,int r,int  c,int n,int m, vector<vector<lln>>&vis){
        if(r>=n||c>=m||vis[r][c]!=0) return 0;            
        int up=0,dn=0,lf=0,rt=0;
		//up
        if(r-1>=0&&g[r-1][c]>g[r][c]){               
            if(vis[r-1][c]==0)                           
            up=dfs(g,r-1,c,n,m,vis);                     
            else                                                      
                up=vis[r-1][c];                                   
        }
		//down
        if(r+1<n&&g[r+1][c]>g[r][c]){
            if(vis[r+1][c]==0)
            dn=dfs(g,r+1,c,n,m,vis);
            else
                dn=vis[r+1][c];
        }
		//left
        if(c-1>=0&&g[r][c-1]>g[r][c]){
            if(vis[r][c-1]==0)
            lf=dfs(g,r,c-1,n,m,vis);
            else
                lf=vis[r][c-1];
        }
        //right
        if(c+1<m&&g[r][c+1]>g[r][c]){
            if(vis[r][c+1]==0)
            rt=dfs(g,r,c+1,n,m,vis);
            else
                rt=vis[r][c+1];
        }
        return vis[r][c]=(1+((up%mod+dn%mod)%mod+lf%mod)%mod+rt%mod)%mod;  
    }
};