//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
  void fn(int ind,int target,vector<int>&v,vector<vector<int>>&ans,vector<int>ds)
  {
      if(ind==v.size())
      {
          if(target==0)
          {
            ans.push_back(ds);  
          }
          return;
      }
      if(v[ind]<=target)
      {
          ds.push_back(v[ind]);
          fn(ind,target-v[ind],v,ans,ds);
          ds.pop_back();
      }
      fn(ind+1,target,v,ans,ds);
  }
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int>>ans;
        vector<int>v;
    sort(A.begin(),A.end());
    A.erase(unique(A.begin(),A.end()),A.end());
        fn(0,B,A,ans,v);
      //  A.erase(unique(A.begin(),A.end()),A.end());
       //sort(ans.begin(),ans.end());
        return ans;
         
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends