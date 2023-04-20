//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int solve(int a, int b, int c) {
        // code here
        // vector<char>v(a+b+c,'0');
        // int maxx = max({a, b, c});
        // int i = 0;
        // while(i<(a+b+c) && maxx--)
        // {
        //     v[i] = 'a';
        //     v[i+1]= 'a';
        //     i+=3;
        // }
        // if(i>=(a+b+c) && maxx) return -1;
        // return a+b+c;
            if (a > (b+c+1)*2|| b > (c+a+1)*2 || c>(a+b+1)*2)
            return -1;
        return a+b+c;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        Solution ob;
        int ans = ob.solve(a, b, c);
     

        cout <<  ans << "\n";
    }
    return 0;
}
// } Driver Code Ends