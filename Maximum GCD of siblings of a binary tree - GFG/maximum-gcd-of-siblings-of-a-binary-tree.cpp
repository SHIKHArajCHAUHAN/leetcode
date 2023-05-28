//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxBinTreeGCD(vector<vector<int>> arr, int N) {
        // code here
         unordered_map<int,vector<int>> mp;
        for(int i = 0; i<arr.size() ; i++){
            mp[arr[i][0]].push_back(arr[i][1]);
        }
        
        int maxi = 0;
        for(auto it: mp){
            if(it.second.size() > 1){
                maxi = max(__gcd(it.second[0],it.second[1]) , maxi);
            }
        }
        
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,u,v;
        cin>>N;
        
        vector<vector<int>> arr;
        
        for(int i=0; i<N-1; i++)
        {
            cin>>u>>v;
            vector<int> edge;
            edge.push_back(u);
            edge.push_back(v);
            arr.push_back(edge);
        }

        Solution ob;
        cout << ob.maxBinTreeGCD(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends