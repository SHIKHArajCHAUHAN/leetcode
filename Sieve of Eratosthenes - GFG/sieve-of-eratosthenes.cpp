//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
bool fn(int n)
{
    for(int i=2;i*i<=n;i++)
    {
       if(n%i==0)return false; 
    }
    return true;
}
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<int>v;
        for(int i=2;i<=N;i++)
        {
            if(fn(i)==true)v.push_back(i);
        }
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends