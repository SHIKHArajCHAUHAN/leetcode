//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
 
class Solution
{
    public:
    // Function for finding maximum AND value.
    int maxAND (int arr[], int N)
    {
        // Your code here
        /* vector<vector<int>>subset;
    
        for(int i=0;i<(1<<N);i++)
        {
                vector<int>v;

            for(int j=0;j<N;j++)
            {
                if(i&(1<<j))
                   v.push_back(arr[j]);
            }
            subset.push_back(v);
        }*/
       /* int m=0;
        for(int i=0;i<N-1;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                m=max(m,arr[i]&arr[j]);
            }
        }
        
        return m;*/
            int bit = 0; 
       int count = 0; 
       for (int i=30;i>=0;i--) { 
           bit |= 1<<i; 
           for (int j=0;j<N;j++) { 
               if ((bit&arr[j]) == bit) {count++;} 
           }
           if (count < 2) {bit = bit&(bit-1);} 
           count=0; 
       }
       return bit;
    }
};

//{ Driver Code Starts.
 
// Driver function
int main()
{
    int t;
    cin>>t;//testcases
    while(t--)
    {
        int n;
        cin>>n;//input n
        int arr[n+5],i;
        
        //inserting elements
        for(i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        //calling maxAND() function
        cout <<  obj.maxAND(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends