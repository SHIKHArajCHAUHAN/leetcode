//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) {
        // code here
    //     vector<int>v;
    //     map<int,vector<int>>mp;
    //     for(int i=0;i<N;i++)
    //     {
    //         mp[A[i]].push_back(i);
    //     }
    //     for(int i=0;i<num;i++)
    //     {
    //         int sum=0;
    //       for(int j=Q[i][0];j<=Q[i][1];j++)
    //       {
    // int cnt=0;
    //               for(int k=j;k<N;k++)
    //               {
    //                   if()cnt++;
    //               }if(cnt==Q[i][2])sum++;
               
    //       }v.push_back(sum);
    //     }
    //     return v;
     vector<int>v;
        int i = 0;
        unordered_map<int, int> mp;
        for(auto q : Q){
            int l = q[0], r = q[1], k = q[2];
            int cnt = 0;
            for(int j=l; j<N; j++){
                mp[A[j]]++;
            }
            for(int j=l; j<=r; j++){
                if(mp[A[j]] == k) cnt++;
                mp[A[j]]--;
            }
     v.push_back(cnt);
            mp.clear();
        }
        return v;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends