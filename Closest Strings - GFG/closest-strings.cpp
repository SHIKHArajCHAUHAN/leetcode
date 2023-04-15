//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int shortestDistance(vector<string> &s, string word1, string word2)
	{
		// Your code goes here
// 		 std::vector<string>::iterator it,it2;
// 		  it =find(s.begin(),
//                  s.end(), word1);
//                   it2 = find(s.begin(),
//                  s.end(), word2);
//                  return abs(it-it2);
  int d1=-1,d2=-1;
        int ans=99999;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==word1)
            d1=i;
            if(s[i]==word2)
            d2=i;
            if(d1!=-1&&d2!=-1)
            ans=min(abs(d1-d2),ans);
        }
        return ans;
	}
};

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
   		int n;
   		cin >> n;

   		vector<string> s(n);
   		for(int i = 0; i < n; i++)
   			cin >> s[i];

   		string word1, word2;

   		cin >> word1 >> word2;
   		
   		Solution ob;

   		cout << ob.shortestDistance(s, word1, word2) << "\n";
   	}

    return 0;
}
// } Driver Code Ends