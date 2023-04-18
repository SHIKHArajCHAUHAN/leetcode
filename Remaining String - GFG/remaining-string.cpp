//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string printString(string &S, char ch, int count)
	{
	    // Your code goes here
	   // int cnt=0;
	   // string str="";int n=S.length();
	   // for(int i=0;i<S.length();i++)
	   // {
	   //     if(S[i]==ch)cnt++;
	   //    if(cnt==count)
	   //    {
	   //        if(i!=n-1)
	   //        {
	   //            return S.substr(i+1,n);
	   //        }
	   //    }
	   // }
	   // return "Empty string";
	     string str="";
        for(int i=0;i<S.length();i++){
            if(count<=0){
                str.push_back(S[i]);
            }
            if(S[i]==ch){
                count--;
            }
        }
        if(str.length()==0){
            str="Empty string";
        }
        return str;
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
   		string s;
   		char ch;
   		int count;

   		cin >> s >> ch >> count;
   		Solution ob;
   		cout << ob.printString(s, ch, count) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends