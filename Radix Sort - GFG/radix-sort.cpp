//{ Driver Code Starts
//Initial Template for C++

#include  <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
//User function Template for C++

void radixSort(int arr[], int n) 
{ 
   // code here
   sort(arr,arr+n);
}
//      int max=0;

//         for(int i=0;i<n;i++){

//             if(arr[i]>max){

//                 max=arr[i];  }

//         }

//         for(int exp=1;max/exp>0;exp*=10){

//             countSort(arr,n,exp,max);

//         }
// }
        
//     void countSort(int arr[],int n,int exp,int max){

//         int count[1000000];
//         int out[n];
//         for(int i=0;i<1000000;i++){

//             count[i]=0;
//         }
//         for(int i=0;i<n;i++){

//             count[(arr[i]/exp)%10]++;
//         }
//         for(int i=1;i<1000000;i++){

//             count[i]=count[i-1]+count[i];

//         }
//         for(int i=n-1;i>=0;i--){

//             out[count[(arr[i]/exp)%10]-1]=arr[i];

//             count[(arr[i]/exp)%10]--;

//         }

//         for(int i=0;i<n;i++){

//             arr[i]=out[i];

//         }

// } 

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
  
        radixSort(arr, n); 
        
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        
        cout<<endl;
    }
    return 0; 
} 
// } Driver Code Ends