//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
public:
    int maxPoints(int X[], int Y[], int N) {
       //code here
        int ans=0;

        for(int i=0;i<N;i++)

        { 
            unordered_map <double,int> m;//slope ki freq k liy
            double x; 

            for(int j=0;j<N;j++)
            {
               if(i!=j)  

               {
                   if(X[j]-X[i]==0) 

                      x=INT_MAX; 

                   else
                       x= double(Y[j]-Y[i])/double(X[j]-X[i]);

                   m[x]++;

                   ans= max(ans,m[x]);

               }
            }    

        }

        return ans+1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x[n], y[n];
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        for(int i=0;i<n;i++){
            cin>>y[i];
        }
        Solution ob;
        cout << ob.maxPoints(x, y, n) << endl;
    }
    return 0;
}

// } Driver Code Ends