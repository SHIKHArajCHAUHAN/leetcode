//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int uneatenLeaves(int arr[],int n,int k);


int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
         
        int n;
        cin>>n;
        int k;
        cin>>k;
        int arr[k];
        for(int i=0;i<k;i++)
        cin>>arr[i];
        cout<<uneatenLeaves(arr,n,k)<<endl;
    }
 }
    
        
// } Driver Code Ends


int uneatenLeaves(int arr[],int n,int k)
{
    // Your code goes here  
     vector<int>v(n+1,-1);

    int cnt=n;

    for(int i=0;i<k;i++){

        if(v[arr[i]]==-1){

            for(int j=arr[i];j<v.size();j=j+arr[i])
            {

            if(v[j]==-1){
                v[j]=1;
                cnt--;}}
            } } 
 return cnt;
}
