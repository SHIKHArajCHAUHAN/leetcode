//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    
    int find(int N){
        // code here
         int last = N%10;
        int digit = 1;
        N/=10;
        int ans = last;
        while(N)
        {
            int cur = N%10;
            if(cur<=last)
            {
                ans=cur*pow(10,digit)+ans;
                last=cur;
            }
            else if(cur>last)
            {
                ans = cur*pow(10,digit)-1;
                last=cur-1;
            }
            N/=10;
            digit++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.find(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends