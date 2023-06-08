//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

    class DisJoint{
  vector<int>parent,size;
  public:
  DisJoint(int n){
      parent.resize(n);
      size.resize(n,1);
      for(int i=0;i<n;i++)parent[i]=i;
  }
  int findUPar(int node){
      if(parent[node]==node)return node;
      return parent[node]=findUPar(parent[node]);
  }
  void UnionBySize(int u,int v){
      int uP=findUPar(u);
      int vP=findUPar(v);
      if(uP==vP)return;
      if(size[uP]<size[vP]){
          parent[uP]=vP;
          size[vP]+=size[uP];
      }
      else{
          parent[vP]=uP;
          size[uP]+=size[vP];
      }
  }
};

class Solution {
  public:
    int maxRemove(vector<vector<int>>& stones, int n) {
        // Code here
        int maxRow{},maxCol{};
        for(auto it:stones){
            maxRow=max(maxRow,it[0]);
            maxCol=max(maxCol,it[1]);
        }
        DisJoint ds(maxRow+maxCol+2);
        unordered_set<int>stt;
        for(auto it:stones){
            int row=it[0];
            int col=it[1]+maxRow+1;
            ds.UnionBySize(row,col);
            stt.insert(row);
            stt.insert(col);
        }
        int cnt{};
        for(auto it:stt)
            if(ds.findUPar(it)==it)cnt++;
        
        return n-cnt;
        // Code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> adj;

        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int i = 0; i < 2; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;

        cout << obj.maxRemove(adj, n) << "\n";
    }
}
// } Driver Code Ends