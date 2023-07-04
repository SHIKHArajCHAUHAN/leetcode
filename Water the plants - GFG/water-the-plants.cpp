//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int min_sprinklers(int gallery[], int n)
    {
        // code here
         vector<int> v(n,-1);
       for(int i=0;i<n;i++){
           if(gallery[i]==-1){
               continue;
           }
          else if(v[i]<i+gallery[i]){
               int left=i-gallery[i];
               int right=i+gallery[i];
               for(int j=left;j<=right;j++){
                   if(j<0 || j>=n){
                       continue;
                   }else{
                       v[j]=right;
                   }
               }
           }
       }
           int c=0;
           int i=0;
           while(i<n){
               if(v[i]==-1)
               {
                   return -1;
               }
               i=v[i];
               c++;
               i++;
           }
           return c;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int gallery[n];
        for(int i=0; i<n; i++)
            cin>> gallery[i];
        Solution obj;
        cout<< obj.min_sprinklers(gallery,n) << endl;
    }
	return 1;
}

// } Driver Code Ends