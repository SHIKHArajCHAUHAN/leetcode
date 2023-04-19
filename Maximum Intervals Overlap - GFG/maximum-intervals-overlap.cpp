//{ Driver Code Starts
// Program to find maximum guest at any time in a party
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> findMaxGuests(int Entry[], int Exit[], int N)
	{
	   // Your code goes here
	   //map<int,int>mp;
	   //for(int i=0;i<N;i++)
	   //{
	   //    mp[Entry[i]]++;
	   //    mp[Exit[i]+1]--;
	       
	   //}
	   //int sum=0;
	   //int maxx=INT_MIN;int ind=0;
	   //for(int i=1;i<=100001;i++)
	   //{
	   //    if(mp.find(i)!=mp.end())
	   //   sum+=mp[i];
	   //   if(sum>maxx)
	   //   {
	   //       maxx=sum;
	   //       ind=i;
	   //   }
	   //}
	   //return {maxx,ind};
	   int arr[100002] = {0};
	   for(int i=0; i<N; i++){
	       arr[Entry[i]]++;
	       arr[Exit[i]+1]--;
	   }
	   int mx = arr[0], t = 0;
	   for(int i=1; i<=100001; i++){
	       arr[i] += arr[i-1];
	       if(arr[i] > mx){
	           mx = arr[i];
	           t  = i;
	       }
	   }
	   return {mx, t};
	}

};

//{ Driver Code Starts.

 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int entry[n],exit1[n];
        for(i=0;i<n;i++)
        cin>>entry[i];
        for(i=0;i<n;i++)
        cin>>exit1[i];
        Solution obj;

	    vector<int> p = obj.findMaxGuests(entry, exit1, n);
	    cout<<p[0]<<' '<<p[1];
	    cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends