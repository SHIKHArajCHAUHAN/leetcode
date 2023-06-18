//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
        // code here
               deque<int> q;
        for(int i=0; i<N; i++){
            q.push_back(i+1);
        }
        int temp = 0;
        int flag = 0;
        while(q.size() > 1){
            while(q.size() > 1 && temp < K && flag == 0){
                temp++;
                q.pop_front();
            }
            while(q.size() > 1 && temp < K && flag == 1){
                temp++;
                q.pop_back();
            }
            temp = 0;
            flag = !flag;
        }
        return q.front();
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends