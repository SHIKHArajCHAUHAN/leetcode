//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	string fractionToDecimal(int numerator, int denominator) {
	    // Code here
	     string ans = "";
       int q = numerator/denominator;
       int rem = numerator%denominator;
       ans = to_string(q);
       if (rem == 0)
       {
           return ans;
       }
       else
       {
           ans += ".";
           unordered_map <int, int>mp;
           while (rem != 0)
           {
               if (mp.find(rem) != mp.end())
               {
                   ans.insert(mp[rem],"(");
                   ans.append(")");
                   break;
               }
               else 
               {
                   mp[rem] = ans.length();
                   rem *= 10;
                   q = rem/denominator;
                   rem = rem%denominator;
                   ans.append(to_string(q));
               }
           }
           return ans;
       }
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int numerator, denominator;
		cin >> numerator >> denominator;
		Solution ob;
		string ans = ob.fractionToDecimal(numerator, denominator);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends