//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxEvents(int start[], int end[], int N) {
        // code here
        
        vector<pair<int,int>>v;
        for(int i=0;i<N;i++)
        {
            v.push_back({start[i],end[i]});
        }
        sort(v.begin(),v.end());
       unordered_set<int>s;
       for(int i=N-1;i>=0;i--)
       {
           if(s.find(v[i].second)==s.end())s.insert(v[i].second);
           else{
           int end=v[i].second;
           while(end>=v[i].first)
           {
               if(s.find(end)==s.end())
              { s.insert(end);break;}
           
               end--;
           }
           }
       }
       return s.size();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];

        Solution ob;
        cout << ob.maxEvents(start,end,N) << endl;
    }
    return 0;
}
// } Driver Code Ends