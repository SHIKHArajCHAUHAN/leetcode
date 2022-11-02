//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int mostBalloons(int N, pair<int, int> arr[]) {
        // Code here
        if(N<=2){
            return N;
            
        }
        int ans=2;
        for(int i=0;i<N;i++){
            double x=arr[i].first;
            double y=arr[i].second;
            int c=0;
            map<double,int> mp;
            
            for(int j=0;j<N;j++){
                double x1=arr[j].first;
                double y1=arr[j].second;
                if(x1==x && y1==y){
                    c++;
                }else{
                    double slope=double(y1-y)/(x1-x);
                    mp[slope]++;
                }
            }
            auto it=mp.begin();
            while(it!=mp.end()){
                ans=max(ans,it->second+c);
                it++;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        pair<int, int> arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i].first;
        }
        for (int i = 0; i < N; i++) {
            cin >> arr[i].second;
        }
        Solution ob;
        cout << ob.mostBalloons(N, arr) << endl;
    }
}
// } Driver Code Ends