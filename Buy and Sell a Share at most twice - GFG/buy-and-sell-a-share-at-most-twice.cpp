//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int maxProfit(vector<int>&price){
    //Write your code here..
     int n=price.size();
       vector<vector<vector<int>>>v(n+1,vector<vector<int>>(2,vector<int>(3,0)));
                                     for(int i=n-1;i>=0;i--)
                                     {
                                         for(int buy=0;buy<=1;buy++)
                                         {
                                             for(int cap=1;cap<=2;cap++)
                                             {
                                                 if(buy==1)
                                                 {
                v[i][buy][cap]=max(-price[i]+v[i+1][0][cap],v[i+1][1][cap]);                   
                                                }
                                                 else
                                                 {
v[i][buy][cap]=max(price[i]+v[i+1][1][cap-1],v[i+1][0][cap]);
                                                 }
                                             }
                                         }
                                     } 
         return v[0][1][2];
}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends