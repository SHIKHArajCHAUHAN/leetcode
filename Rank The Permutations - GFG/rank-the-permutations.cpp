//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    long long findRank(string str) {
        //code here
    //   string st=str;
    //   sort(st.begin(),st.end());
    //  int cnt=1;
    //     do{
    //         if(str==st)
    //             return cnt;
    //             else cnt++;
            
    //     }
    //     while(next_permutation(st.begin(),st.end()));
       
        
       
    //     return 0;
           int n=str.size();
       long long int fac[n+1]={0};
       long long int ans=0;
       fac[0]=1;
       for(int i=1;i<=n;i++){
           fac[i]=i*fac[i-1];
       }
       for(int i=0;i<n-1;i++){
           int count=0;
           for(int j=i+1;j<n;j++){
               if(str[i]>str[j])
               count++;
           }
          ans+=count*fac[n-i-1];
       }
       
       return ans+1;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        Solution obj;
        long long ans = obj.findRank(s);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends