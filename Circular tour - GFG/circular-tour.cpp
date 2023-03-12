//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       vector<int>v;
       for(int i=0;i<n;i++)
       {
           v.push_back(p[i].petrol-p[i].distance);
       }
       int j=0;
       for(int i=0;i<n;i++)
       {
           v.push_back(v[i]);
       }
       int sum=0;
       int i=0;
       while(i<2*n&&j<2*n){
           sum+=v[j];
          if(sum>=0){
              if((j-i+1)==n)
             {return i;}
          }
          else
          {
            sum=0;i=j+1;
          }j++;
       }
       return -1;
       //Your code here
       
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
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}

// } Driver Code Ends