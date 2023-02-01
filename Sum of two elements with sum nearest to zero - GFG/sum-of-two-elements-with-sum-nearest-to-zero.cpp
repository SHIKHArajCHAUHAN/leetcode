//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here
             sort(arr,arr+n);
            int res = arr[0]+arr[n-1];
          int i =0;
          int j =n-1;
          while(i<j){
              int temp = arr[i]+arr[j];
              if(temp ==0)
              return 0;
              if(temp<0)
              i++;
              else
              j--;
              if(abs(temp)<abs(res))
              res = temp;
              if(abs(temp)==abs(res))

              res = max(res, temp);}
          return res;
            
        }
};

//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}
// } Driver Code Ends