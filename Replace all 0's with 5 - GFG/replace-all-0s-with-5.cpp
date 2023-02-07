//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    string str="";
    while(n)
    {
        int r=n%10;
        if(r==0) str+="5";
        else str+=to_string(r);
        n/=10;
    }
    reverse(str.begin(),str.end());
    return stoi(str);
}