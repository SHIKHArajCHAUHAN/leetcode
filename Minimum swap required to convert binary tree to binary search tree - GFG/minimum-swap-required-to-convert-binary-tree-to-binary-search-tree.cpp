//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
  public:
   void inorder(vector<int> &A,int i,vector<int> &in,int n)
  {
      if(i>=n)
      return;
      
      inorder(A,2*i+1,in,n);
      in.push_back(A[i]);
      inorder(A,2*i+2,in,n);
      return;
  }
    int minSwaps(vector<int>&A, int n){
        //Write your code here
              int swaps=0;//when we do inorder traversal of bst then we find the increasing order pattern
                     
        vector<int> in;
         inorder(A,0,in,n);
        vector<pair<int,int>> pr;
        for(int i=0;i<n;i++)
        {
            pr.push_back({in[i],i});
        }
        
        sort(pr.begin(),pr.end());
        for(int i=0;i<n;i++)
        {
            if(i!=pr[i].second)
            {
              swaps++;
              swap(pr[i],pr[pr[i].second]);
              i--;
            }
        }
        
        return swaps;
        
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
	    cin >> n;
	    vector<int>A(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> A[i];
	    }
	    Solution ob;
	    int ans = ob.minSwaps(A, n);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends