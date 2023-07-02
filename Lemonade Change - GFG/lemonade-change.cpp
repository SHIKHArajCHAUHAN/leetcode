//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
           int f5 = 0;
        int f10 = 0;
        int f20 = 0;

        if(bills[0] == 10 || bills[0] == 20){
            return false;
        }
        for(int i = 0;i<N;i++){
            if(bills[i] == 5){
                f5++;
            }
            else if(bills[i] == 10){
                if(f5>=1){
                    f5--;
                    f10++;
                }
                else{
                    return false;
                }
            }
            else if(bills[i] == 20){
                if(f5>=1 && f10>=1){
                    f5--;
                    f10--;
                    f20++;
                }
                else if(f5>=3){
                    f5-=3;
                    f20++;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends