//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPallindrome(long long int N){
        // code here
        string s = "";
        while(N>0)
        {
            s=s+to_string(N%2);
            N=N/2;
        }
        
        int i = 0;
        int j = s.length()-1;
        
        while(i<j)
        {
            if(s[i] != s[j])
                return 0;
            i++;
            j--;
        }
        
        return 1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.isPallindrome(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends