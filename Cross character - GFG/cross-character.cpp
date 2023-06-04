//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string crossPattern(string S){
        // code here 
        int n=S.length();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j || i+j==n-1){
                    cout<<S[j];
                }else{
                    cout<<" ";
                }
            }
            
        }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.crossPattern(S) << endl;
    }
    return 0; 
} 
// } Driver Code Ends