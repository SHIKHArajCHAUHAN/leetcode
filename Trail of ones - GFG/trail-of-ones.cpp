//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int numberOfConsecutiveOnes(int N){
        // code here 
            int ans;

        int first=0;
        int second=1;
        for(int i=1;i<N+2;i++){
            ans=first+second;
            first=second;
            second=ans;

        }
        ans=pow(2,N)-ans;

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
        cin >> N;
        Solution ob;
        cout << ob.numberOfConsecutiveOnes(N) << endl;
    }
    return 0; 
} 

// } Driver Code Ends