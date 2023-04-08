//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        vector<int>v;
        // code here
        // for(int i=0;i<arr.size();i++)
        // {
        //     if(arr[i]*arr[i+1]>=0)
        //     {
        //         v.push_back(arr[i]);
        //     }
        //     else i++;
        // }
        // return v;
          stack<int> st;
         for(int i=0;i<arr.size();++i)
        {
            if(st.empty() || (st.top()>=0 && arr[i]>=0) || (st.top()<0 && arr[i]<0))
            st.push(arr[i]);
            else
            st.pop();
        }
        vector<int>ans;
       for(;!st.empty();st.pop())
       {
           ans.push_back(st.top());
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends