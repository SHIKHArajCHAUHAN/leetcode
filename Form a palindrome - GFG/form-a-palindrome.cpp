//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMinInsertions(string S){
        // code here 
            int n=S.length();

        vector<vector<int>> dp(n+1,vector<int>(n+1,0));

        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){

                if(S[i]==S[n-1-j]){

                    dp[i+1][j+1]=1+dp[i][j];

                }
                else{

                    dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
                }
            }
        }
        return n-dp[n][n];
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.findMinInsertions(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends