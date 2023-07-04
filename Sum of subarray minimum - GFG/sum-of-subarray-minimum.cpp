//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int sumSubarrayMins(int N, vector<int> &arr) {
        // code here
        int MOD = 1e9+7;
        stack<int>left, right;
        vector<int> left_bound(N,0), right_bound(N,0);
        for(int i = 0; i< N; i++){
          while(!left.empty() && arr[left.top()] > arr[i]){
            left.pop();
          }
          if(left.empty()){
            left_bound[i] = i+1;
          }
          else{
            left_bound[i]  = i - left.top();
          }
          left.push(i);
        }
      for(int i = N-1; i >= 0; i--){
          while(!right.empty() && arr[right.top()] >= arr[i]){
            right.pop();
          }
          if(right.empty()){
            right_bound[i] = N-i;
          }
          else{
            right_bound[i]  = right.top()-i;
          }
          right.push(i);
        }
      long long ans = 0;
      for(int i = 0; i<N; i++){
        long long prod = (left_bound[i]*right_bound[i])%MOD;
        prod = (prod*arr[i])%MOD;
        ans = (ans + prod)%MOD;
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

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        cout << obj.sumSubarrayMins(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends