//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        // code here
         vector<int>s;
        for (int i : asteroids) {
			while (!s.empty() && s.back() > 0 && s.back() < -i)
				s.pop_back();
			if (s.empty() || i > 0 || s.back() < 0)
				s.push_back(i);
			else if (i < 0 && s.back() == -i)
				s.pop_back();
		}
		return s;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends