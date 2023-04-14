//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<int> deleteElement(int arr[],int n,int k);

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        vector<int> v;
        
        v = deleteElement(arr,n,k);
        vector<int>::iterator it;
         for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
        cout<<endl;
        
    }
return 0;
}

// } Driver Code Ends


vector<int> deleteElement(int arr[],int n,int k)
{
    // complete the function
    stack<int>s;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        while(s.size()>0&&s.top()<arr[i]&&k!=0)
        {
            s.pop();k--;
        }
                s.push(arr[i]);    
      
    }
    while(!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }
     reverse(v.begin(),v.end());
     return v;
}
