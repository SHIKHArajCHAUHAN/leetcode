//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string stringPartition(string S, int a, int b){
        // code here 
        int n=S.length();
        for(int i=1;i<n;i++){
            string str1=S.substr(0,i);
           string str2=S.substr(i,n-1);
           if(((stol(str1))%a==0)&&((stol(str2))%b==0))
           return str1+" "+str2;
       }
       return "-1";
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {   
        int a,b;
        string S;
        cin >> S >> a >> b;
        Solution ob;
        cout << ob.stringPartition(S,a,b) << endl;
    }
    return 0; 
} 
// } Driver Code Ends