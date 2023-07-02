//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:    
    int swapBits(int x, int p1, int p2, int n)
    {
        // Code Here
           int mask1= (1<<(p1+n)) - (1<<p1) ;
        int mask2= (1<<p2+n) - (1<<p2) ;
        
        int a = mask1 & x;
        int b = mask2 & x;
        
        x = x & (~ mask2);
        x|= (a<<p2-p1);
        
        x = x & (~mask1);
        x|= (b>>p2-p1);
        
      return x;
        
    }
};

//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,p1,p2,n;
		cin>>x>>p1>>p2>>n;
		Solution obj;
		int res=obj.swapBits(x,p1,p2,n);
		printf("%d\n", res);
	}
    return 0;
}
// } Driver Code Ends