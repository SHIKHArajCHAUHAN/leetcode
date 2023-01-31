//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string isSquare(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
        // code here
          if(x1==x2&& x3==x4&& y1==y2&&y3==y4){
            return "No";}
          if(((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1) ) == ((x4-x2)*(x4-x2)+(y4-y2)*(y4-y2)))
           return "Yes";
           return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

        Solution ob;
        cout << ob.isSquare(x1,y1,x2,y2,x3,y3,x4,y4) << endl;
    }
    return 0;
}
// } Driver Code Ends