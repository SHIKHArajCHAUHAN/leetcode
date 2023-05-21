//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        // code here
        int m=INT_MAX,i=0,j=arr.size()-1;
        vector<int> ans;
        sort(arr.begin(),arr.end());
        while(i<j){
            int b=arr[i]+arr[j];
            if(m > abs(x-b)){
                ans.clear();
                m=abs(x-b);
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
            if(b == x) return {arr[i],arr[j]};
            else if(b < x) i++;
            else j--;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumClosest(arr, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends