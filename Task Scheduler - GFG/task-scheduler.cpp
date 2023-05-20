//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        // code here
         map<char,int>mp;
        for(char c:tasks) mp[c]++;
        priority_queue<int>pq;
        for(auto i:mp)
        {
            pq.push(i.second);
        }
        int res=0;
        while(!pq.empty())
        {
            int time=0;
            vector<int>v;
            for(int i=0;i<=K;i++)
            {
                if(!pq.empty())
                {
                    v.push_back(pq.top()-1);
                    pq.pop();
                time++;
            }
        }
        for(auto t:v)
        
            if(t) pq.push(t);
            if(pq.empty()) res+=time;
            else res+=(K+1);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends