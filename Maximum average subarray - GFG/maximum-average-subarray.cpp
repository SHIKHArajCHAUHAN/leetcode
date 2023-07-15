//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMaxAverage(int arr[], int n, int k) {
        // code here
        //use sliding window approch
        double sum = 0;
       for(int i = 0; i < k ; i++){
           sum += arr[i];
       }
       double maxi = sum / k;
       int maxiIndex = 0;
       int i = 0,j=k-1;
       while(j < n){
         
           if(j - i+ 1 == k){
               if(sum / k > maxi){
                   maxiIndex = i;
                   maxi = sum / k;
               }
           }
           sum -= arr[i];
           i++;
           j++;
           sum += arr[j];
       }
       return maxiIndex;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxAverage(arr, n, k);
        for (int i = ans; i < ans + k; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends