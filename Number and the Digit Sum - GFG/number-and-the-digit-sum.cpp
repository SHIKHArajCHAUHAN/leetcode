//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        long long int numberCount(long long int N, long long int K)
        {
            // your code here
         long long int cnt=0;
         for(auto i=1;i<=N;i++)
         {
        int sum=0;
        int x=i;
        while(x)
        {
        sum=sum+x%10;
        x=x/10;
        }
        if(i-sum>=K)
        cnt++;
         }
         return cnt;
        }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, k;
		cin >> n >> k;
		Solution ob;
		cout <<ob.numberCount(n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends