//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int maxSubstring(string S)
	{
	    // Your code goes here
	    int res=INT_MIN;
	    int cnt=0;
	    for(int i=0;i<S.length();i++)
	    {
	        if(S[i]=='1')cnt--;
	        if(cnt<0)cnt=0;
	        if(S[i]=='0')cnt++;
	        res=max(res,cnt);
	    }
	    if(res==0) return -1;
	    else
return res;
}};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}

// } Driver Code Ends