//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    bool fn(int n){
    while(n>0){
        int rem=n%10;
        if(rem==0 || rem==1 || rem==4 || rem==6 || rem==8 || rem==9)
        return 0;
        n/=10;
    }
    return 1;
}
    //Function to find nth number made of only prime digits.
    int primeDigits(int n)
    {
        //code here
          int i=2,cnt=0;
    while(1){
        if(fn(i))cnt++;
        if(cnt==n)return i;
        i++;
    }
    return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    // All the above tasks are preprocessing, now you can run testcases
    // and then print the values accordingly
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout << ob.primeDigits(n) << "\n";   
    }
}

// } Driver Code Ends