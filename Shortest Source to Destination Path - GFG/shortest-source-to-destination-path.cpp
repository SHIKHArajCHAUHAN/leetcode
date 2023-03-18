//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
           queue<pair<int,pair<int,int>>>q;

        q.push({0,{0,0}});//steps and pair of row and col

        int dx[4]={-1,1,0,0};
        int dy[4]={0,0,-1,1};
        if(A[0][0]==0)return -1;
        while(q.size()){
            auto x=q.front();
            q.pop();
            int step=x.first;
            int a=x.second.first;
            int b=x.second.second;
            A[a][b]=-1;///ese visite krchuke hain
            if(a==X and b==Y)return step;
            for(int i=0;i<4;i++){
                int na=a+dx[i];
                int nb=b+dy[i];
                if(na<N and nb<M and na>=0 and nb>=0 ){
                    if(A[na][nb]==1){
                        A[na][nb]=-1;
                        if(na==X and nb==Y)return step+1;
                        q.push({step+1,{na,nb}});
                    }
                }
            }
        }

        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends