//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
      int dr[8]={+1,+1,-1,-1,-2,-2,+2,+2};
	    int dc[8]={+2,-2,+2,-2,+1,-1,-1,+1};
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	     
	    queue<pair<int,pair<int,int>>> q;
	    q.push({0,{KnightPos[0],KnightPos[1]}});
	    vector<vector<int>> vis(N+1,vector<int>(N+1,0)); //vis matrix bna liya 
	    vis[KnightPos[0]][KnightPos[1]]=1;
	    
	    while(!q.empty()){
	        auto it=q.front();
	        q.pop();
	        int dist=it.first;
	        int row=it.second.first;
	        int col=it.second.second;
	        if(row==TargetPos[0] && col==TargetPos[1]) return dist;
	        for(int a=0;a<8;a++){
	            int nrow=row+dr[a];
	            int ncol=col+dc[a];
	            if(nrow>=0 && nrow<=N && ncol>=0 &&ncol<=N && vis[nrow][ncol]==0){
	                
	                 q.push({dist+1,{nrow,ncol}});
	                 vis[nrow][ncol]=1;
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
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends