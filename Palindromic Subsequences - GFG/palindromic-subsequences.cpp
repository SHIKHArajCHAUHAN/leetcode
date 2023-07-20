//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int MinRemove(int n, string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << MinRemove(n, s) << endl;
    }
return 0;
}
// } Driver Code Ends


int MinRemove(int n, string s){
    //complete the function here
    string temp=s;
    reverse(temp.begin(), temp.end());
    if(s==temp)
        return 1;
    return 2;
}