//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
  bool fn(int num,int D,int &sum)
  {
      if(num==0 && (num!=D || D==0)) return true;
      int l=num%10;
      num=num/10;
      if(l==D || l<=sum) return false;
      sum=sum+l;
      return fn(num,D,sum);
  }
    vector<int> goodNumbers(int L, int R, int D) {
        // code here
           vector<int>ans;
        for(int i=L;i<=R;i++)
        {
            int sum=i%10;
            if(sum!=D && fn(i/10,D,sum))
            ans.push_back(i);}
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R, D;
        cin >> L >> R >> D;
        Solution ob;
        vector<int> ans = ob.goodNumbers(L, R, D);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends