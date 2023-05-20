//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        // code here
        if(N%groupSize!=0) return false;
         map<int,int>m;
        for(int i:hand){
            m[i]++;
        }
        while(!m.empty()){
            int s = m.begin()->first;//phla dekh rhe
            int l = groupSize;// upto what we have to take
            while(l--){
                if(!m[s])return false;// agr na ho present to return false
                else{
                    m[s]--;
                    if(m[s]==0)m.erase(s);
                }
                s++;
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
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends