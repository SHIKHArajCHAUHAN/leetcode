//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    int  maximize_xor_count(int n ) 
    {
        // Code here.
        int cnt=0;
       /* for(int i=1;i<n;i++)
        {
            if((i^n)>=n)cnt++;
        }
        return cnt;*/
        int i=1;
         while(n>0){
           if(!(n&1)){
               cnt += i;
           }
           n = n>>1;
           i = i*2;
       }
       return cnt;
    }
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int  n;
    	cin >> n;
    	Solution ob;
    	int ans = ob.maximize_xor_count(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends