//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        priority_queue<pair<int,string>>pq;
        for(auto i:mp)
        {
            pq.push({i.second,i.first});
        }
       // mp.clear();
        if(mp.size()>1)
       { pq.pop();
        return pq.top().second;}
        else return "";
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends