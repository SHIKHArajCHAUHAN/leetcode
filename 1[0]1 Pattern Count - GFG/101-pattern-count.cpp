//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{
    public:
        int patternCount(string S) 
        { 
            //code here.
            int cnt=0;
            for(int i=0;i<S.length();i++)
            {
               if(S[i]=='1'&&S[i+1]=='0')
               {
                   
                   i++;
                   while(S[i]=='0')
                   {
                       i++;
                       
                   } if(S[i]=='1') {
                       cnt++;
                       i--;
                   }
               }
               
            }
            return cnt;
        } 

};

//{ Driver Code Starts.
int main() 
{ 
	int t;
	cin>>t;
	while(t--){
	    string S;
    	cin>>S;
    	Solution ob;
    	cout <<ob.patternCount(S) << endl; 
	}
	return 0; 
} 

// } Driver Code Ends