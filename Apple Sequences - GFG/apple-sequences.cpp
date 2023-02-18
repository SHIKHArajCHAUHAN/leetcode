//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        // code here 
        int s=0,e=0,ans=0;
        while(e!=n)
        {
            if(m>0)
            {
                if(arr[e]=='O')
                {
                    m--;
                }
            }
            else
            {
                if(arr[e]=='O'){
                    while(arr[s]!='O'){
                    s++;
                }
                s++;
                }
            }
        
        ans=max(ans,e-s+1);
        e++;}
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
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends