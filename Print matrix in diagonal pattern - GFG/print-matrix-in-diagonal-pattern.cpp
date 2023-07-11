//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
            map<int,vector<int>>mp;
        for(int i=0;i<mat.size();i++)
        {
          for(int j=0;j<mat.size();j++)
          {
              mp[i+j].push_back(mat[i][j]);
          }
        }
        
        vector<int>v;
        int k=0;
        for(auto i:mp)
        {
           if(k%2==0 and k>0)
           {
               reverse(i.second.begin(),i.second.end());
           }
           
           for(auto ele:i.second)
           {
               v.push_back(ele);
           }
           
           k++;
        }
        return v;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends