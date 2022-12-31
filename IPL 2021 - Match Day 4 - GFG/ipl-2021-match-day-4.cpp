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
    int maxAND (int arr[], int n)
    {
        // Your code here
        int x=0;
        int msk=0;
        for(int i=31;i>=0;i--)
        {
            int temp=x|(1<<i);
            int cnt=0;
            for(int j=0;j<n;j++)
            {
                int temp2=arr[j];
                if((temp2&temp)==temp)cnt++;
            }
            if(cnt>=2) x=temp;
        }
        return x;
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