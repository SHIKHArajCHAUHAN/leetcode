//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int  find_and(int l, int r ) 
    {
        // Code here.
       /* int ans=l;
        for(int i=l-1;i<=r;i++)
        {
            ans=(ans&i);
        }
        return ans;*/
        
        int cnt=0;
       while(l!=r)
       {
           l>>=1;
           r>>=1;
           cnt++;
       }
       return l<<=cnt;
    }
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int  l, r;
    	cin >> l >> r;
    	Solution ob;
    	int ans = ob.find_and(l, r);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends