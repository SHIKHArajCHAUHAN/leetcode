//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
// static bool cmp(vector<int> a, vector<int> b){
        
//         return a[1] < b[1];
//     }
//     vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
//      vector<vector<int>>v;
//      for(int i=0;i<N;i++)
//      {
//          v.push_back({S[i],F[i]});
//      }
//      sort(v.begin(),v.end(),cmp);
//     vector<int>ans;
//      int prev=v[0][1];
//      ans.push_back(1);
//      for(int i=1;i<N;i++)
//      {
//         if(v[i][0]>prev)
//         {
//           prev=v[i][1];
//           ans.push_back(i+1);
//         }
//      }
//     return ans;
//     }
static bool comp(pair<pair<int,int>,int> a, pair<pair<int,int>,int> b){
        
        return a.first.second < b.first.second;
    }
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        
        vector<int>ans;
        vector<pair<pair<int,int>,int>>v;
        int n = N;
        
        for(int i=0; i<n; i++){
            v.push_back({{S[i], F[i]}, i+1});
        }
        sort(v.begin(), v.end(), comp);
        ans.push_back(v[0].second);
        int ansEnd = v[0].first.second;
        for(int i=1; i<n; i++){
            if(v[i].first.first > ansEnd){
                ans.push_back(v[i].second);
                ansEnd = v[i].first.second;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends