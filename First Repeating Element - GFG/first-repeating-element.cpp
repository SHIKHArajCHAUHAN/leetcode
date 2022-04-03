// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        
/*for(int i=0;i<n;i++){
    for(int j=i+1;j<n-1;j++){
        if(arr[i]==arr[j])
        return i+1;

    }
}*/int max = 0;
    for (int x = 0; x < n; x++) {
        if (arr[x] > max) {
            max = arr[x];
        }
    }
    int temp[max + 1];
 
    for (int i = 0; i < max + 1; i++)
        temp[i] = 0;
 
    for (int x = 0; x < n; x++) {
        int num = arr[x];
        temp[num]++;
    }
 
    for (int x = 0; x < n; x++) {
        int num = arr[x];
        if (temp[num] > 1) {
            return x+1;
        }
    }
return -1;
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}
  // } Driver Code Ends