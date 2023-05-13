//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
    	string MaxZero(string a[],int n)
    	{
    	  int maxx=0;
    	  string ans="-1";
    	  for(int i=0;i<n;i++)
    	  {
    	      int cnt=0;
    	      for(int j=0;j<a[i].length();j++)
    	      {
    	        if(a[i][j]=='0')cnt++;  
    	      }
    	      if(cnt>maxx)
    	      {
    	          maxx=cnt;
    	          ans=a[i];
    	          
    	      }
    	         
    	 if(cnt ==  maxx){
    	    if(a[i].size()>=ans.size() and a[i]>ans) 
    	        ans = a[i];
    	   }
    	      
    	  }
    	  if(maxx==0) return "-1";
    	   return ans;     
    	}
};
	 

//{ Driver Code Starts.

int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    string a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    

      

        Solution ob;
        cout << ob.MaxZero(a,n) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends