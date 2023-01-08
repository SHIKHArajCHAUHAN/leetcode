//{ Driver Code Starts
// CPP program to find maximum sum
// by selecting a element from n arrays
#include<bits/stdc++.h>

using namespace std;

// To calculate maximum sum by
// selecting element from each array
int maximumSum( int n,int m, vector<vector<int>> &a);



// Driver program to test maximumSum
int main() {
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<vector<int>> arr(n, vector<int>(m,0));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            cin>>arr[i][j];
            
        cout << maximumSum(n,m,arr)<<endl;
    
    }
    return 0;

}

// } Driver Code Ends


int maximumSum( int n,int m, vector<vector<int>> &a) {

    // Complete the function
    int maxi = *max_element(a[n-1].begin(),a[n-1].end());
    int sum= maxi;
   for(int i = n-2 ;i>=0; i--)
   {
        int maxx = 0;
       for (int j = 0;j<m;j++)
       {
           if(a[i][j] < maxi)
           {
              maxx = max(maxx,a[i][j]);
           }
       }
       if(maxx == 0)
       {
           return 0;
       }
       else{
           maxi = maxx;
           sum = sum + maxi;}
   }
   return sum;
    
}