//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
long long fn(long long n)
{
    if(n==0||n==1) return 1;
    return n*fn(n-1);
}
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        vector<long long>v;
        long long i=1;
           while(fn(i)<=N){
            v.push_back(fn(i));
            i++;
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
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends