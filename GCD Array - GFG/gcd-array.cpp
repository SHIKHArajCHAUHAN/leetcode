//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int solve(int N, int K, vector<int> &arr) {
        // code here
        for(int i=1;i<N;i++) arr[i]+=arr[i-1];
        vector<int>v;
        for(int i=1;i*i<=arr[N-1];i++) {
            if(arr[N-1]%i==0) {
                v.push_back(i);
                v.push_back(arr[N-1]/i);
            }
        }
        
        int ans=1;
        for(int x : v) {
            int count=0;
            for(int a : arr) {
                if(a%x==0) {
                    count++;
                }
            }
            if(count>=K) ans=max(ans,x);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        
        vector<int> arr(N);
        Array::input(arr,N);
        
        Solution obj;
        int res = obj.solve(N, K, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends