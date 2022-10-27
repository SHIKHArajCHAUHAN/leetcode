//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find the minimum inverting factor 
int findMinimumInvertingFactor(int arr[], int N);

int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        cout << findMinimumInvertingFactor(arr, n);
        
        cout << endl;
        
    }

}


// } Driver Code Ends


int findMinimumInvertingFactor(int arr[], int N) 
{ 
    // Complete the function 
    for(int i = 0; i < N; i++){
        int num = 0;
        while(arr[i] > 0){
            num = num*10 + (arr[i] % 10);
            arr[i] /= 10;
        }
        arr[i] = num;
    }
    sort(arr, arr+ N);
    int min = INT_MAX;
    for(int i = 0; i < N - 1; i++)
        if((arr[i + 1] - arr[i]) < min) 
        	min = arr[i + 1] - arr[i];
    return min;
} 
