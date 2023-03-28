//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int>v;
   void fn(int N, int& n, int box1, int box3, int box2){
       if(N==0 or n==0){
           return;
       }
       if(N==1){
           n--;
           if(n==0){
               v.push_back(box1);
               v.push_back(box3);
           }
           return;
       }
     fn(N-1, n, box1, box2, box3);
fn(1, n, box1, box3, box2);
fn(N-1, n, box2, box3, box1);
       
       
   }
   vector<int> shiftPile(int N, int n){
       fn(N,n,1,3,2);  
       return v;
   }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends