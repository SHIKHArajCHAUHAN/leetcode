//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          // code here  
          int Maxsum=INT_MIN;
       int currsum=0;
      
       string currstr="";
       string Maxstr="";
       map<int,int>mp;
       for(int i=0;i<n;i++){
           mp[x[i]]=b[i];
       }
       for(int i=0;i<w.length();i++){
           if(mp.find(w[i])!=mp.end()){
               currsum=currsum+mp[w[i]];
           }
           else{
           currsum=currsum+(int)w[i];
           }
            currstr+=w[i];
           
           if(Maxsum<currsum){
               Maxsum=currsum;
            Maxstr=currstr;
              
               
           }
          if(currsum<0){
               currsum=0;
               currstr="";
           }
           
       }
       return Maxstr;
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends