//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	vector<int> barcketNumbers(string S)
	{
	    // Your code goes here
	    stack<int>s;
	    vector<int>v;
	    int cnt=0;
	    for(int i=0;i<S.length();i++)
	    {
	        if(S[i]=='(')
	        {
	          cnt++;
	          s.push(cnt);
	          v.push_back(s.top());
	        }
	        else if(S[i]==')'&&s.size()!=0)
	        {
	            v.push_back(s.top());
	            s.pop();
	        }
	    }
	    return v;
	}
};

//{ Driver Code Starts.

int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	    Solution ob;

   		vector<int> ans = ob.barcketNumbers(s);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends