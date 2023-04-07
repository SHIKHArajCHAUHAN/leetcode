//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
bool ispalindrome(string s)
{
    int i=0;int j=s.length()-1;
    while(i<=j)
    {
        if(s[i]!=s[j]) return false;
        i++;j--;
    }
    return true;
}
    int addMinChar(string str){    
        //code here
        int cnt=0;
         while((ispalindrome(str))==false)
            {
                str.pop_back();
                cnt++;
            }
        
        return cnt;
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends