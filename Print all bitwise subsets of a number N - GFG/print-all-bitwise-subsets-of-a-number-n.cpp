//{ Driver Code Starts

// CPP program to print all bitwise
// subsets of N (Efficient approach)

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// fucntion to find bitwise subsets
// Efficient approach
class Solution {
public:
    vector<int> printSubsets(int n) {
        // Code here
        vector<int>v;
        for(int i =0;i<=n;i++)
        {
            if((i&n)==i)v.push_back(i);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        return v;
    }
};


//{ Driver Code Starts.

int main() { 
    Solution ob;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> v;
        v = ob.printSubsets(n);
        for(int i: v)
            cout << i << " ";
        cout << endl;
    }

return 0;
}

// } Driver Code Ends