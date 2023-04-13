//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int save_gotham(int arr[], int n);



int main() {
    
    int t;
    cin>> t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        cout << save_gotham(arr, n) << endl;
    }
    
	return 0;
}
// } Driver Code Ends


int save_gotham(int arr[], int n)
{
    // Complete the function
    vector<int>v;
    stack<int>s;
    for(int i=n-1;i>=0;i--)
        {
           if(s.size()==0) v.push_back(0);
            else if(s.size()>0&&s.top()>arr[i]) v.push_back(s.top());
            else if(s.size()>0&&s.top()<=arr[i])
            {
                while(s.size()>0&&s.top()<=arr[i]) s.pop();
                if(s.size()==0) v.push_back(0);
                else v.push_back(s.top());
            }
            s.push(arr[i]);
        }
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            ans=ans%1000000001+v[i]%1000000001;
        }
        return ans;
}