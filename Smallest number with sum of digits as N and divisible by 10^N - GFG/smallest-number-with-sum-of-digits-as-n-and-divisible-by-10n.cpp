//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
	public:
	string digitsNum(int N)
	{
	    string s1=to_string(pow(10,N));
	    string s;
	    if(N%9) s+=to_string(N%9);
	    s+=string(N/9,'9');
	    s+=string(N,'0');
	    return s;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		string ans = ob.digitsNum(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends