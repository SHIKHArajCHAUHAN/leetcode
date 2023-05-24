//{ Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
  //Your code here
//   int pre[n],suff[n];
//   pre[0]=A[0],suff[n-1]=A[n-1];
//   for(int i=0;i<n;i++)
//   {
//       pre[i]=pre[i-1]+A[i];
//   }
//   for(int i=n-2;i>=0;i--)
//   {
//       suff[i]=suff[i+1]+A[i];
//   }
//   for(int i=0;i<n-1;i++)
//   {
//       if(pre[i]==suff[i+1])return i+1;
//   }
//   return -1;
    int end=0,start=0,index=0;
  for(int i=0;i<n;i++)  
  {
      end+=A[i];
  }
  for(int i=0;i<n;i++)

  {
          end-=A[i];
     if(end==start)
       return i;
           start+=A[i];}
    return -1;
}