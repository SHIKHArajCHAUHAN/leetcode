//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
 int solve(int N,unordered_map<int,int> &mp){
        if(N==1||mp.find(N)!=mp.end()){
            if(N==1) return 1;
            return 0;
        }
        mp[N]++;
        int ans=0;
        while(N>0){
            int rem=N%10;
            ans+=rem*rem;
            N=N/10;
        }
        return solve(ans,mp);
    }
    int isHappy(int N){
        // code here
         unordered_map<int,int> mp;
        int ans=solve(N,mp);
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends