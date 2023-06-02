//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
public:
    vector<int> primes;
    int maxi = 1e6;

    void precompute() {
        vector<bool> isPrime(maxi, true);
        isPrime[0] = isPrime[1] = false;
        
        for(int i = 2; i * i <= maxi; i++) {
            if(isPrime[i]) {
                for(int j = i * i; j <= maxi; j += i)
                    isPrime[j] = false;
            }
        }
        
        for(int i = 2; i <= maxi; i++)
            if(isPrime[i])
                primes.push_back(i);
    }
    void dfs(int node, vector<vector<int>> &g, vector<int> &vis, int &count){
        vis[node] = 1;
        count++;
        for(auto v: g[node]) {
            if(!vis[v])
                dfs(v, g, vis, count);
        }
    }
    int helpSanta(int n, int m, vector<vector<int>> &g){
        vector<int> vis(n + 1);
        int maxiNodes = 0;
        for(int i = 1; i <= n; i++) {
            if(!vis[i]) {
                int count = 0;
                dfs(i, g, vis, count);
                maxiNodes = max(maxiNodes, count);
            }
        }
        
        if(maxiNodes == 1) return -1;
        
        return primes[maxiNodes - 1];
    }
};
 

//{ Driver Code Starts.

int main(){
	int t;cin>>t;
	Solution ob;
	ob.precompute();
	while(t--){
        int n,e,u,v;
        cin>>n>>e;
        vector<vector<int>> g(n+10);
        
		for(int i = 0; i < e; i++)
		{
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		cout << ob.helpSanta(n, e, g) << endl;
		
	}
}



// } Driver Code Ends