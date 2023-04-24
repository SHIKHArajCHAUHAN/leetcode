//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        // code here 
        // int n=arr.size();
        //  vector<int>v1;
        // vector<int>v2;
        // stack<int>s,s2;
        // for(int i=n-1;i>=0;i--)
        // {
        //   if(s.size()==0) v1.push_back(-1);
        //     else if(s.size()>0&&arr[s.top()]<arr[i]) v1.push_back(s.top());
        //     else if(s.size()>0&&arr[s.top()]>=arr[i])
        //     {
        //         while(s.size()>0&&arr[s.top()]>=arr[i]) s.pop();
        //         if(s.size()==0) v1.push_back(-1);
        //         else v1.push_back(s.top());
        //     }
        //     s.push(i);
        // }
        // reverse(v1.begin(),v1.end());
        //  for(int i=0;i<n;i++)
        // {
        //   if(s2.size()==0) v2.push_back(-1);
        //     else if(s2.size()>0&&arr[s2.top()]<arr[i]) v2.push_back(s2.top());
        //     else if(s2.size()>0&&arr[s2.top()]>=arr[i])
        //     {
        //         while(s2.size()>0&&arr[s2.top()]>=arr[i]) s2.pop();
        //         if(s2.size()==0) v2.push_back(-1);
        //         else v2.push_back(s2.top());
        //     }
        //     s2.push(i);
        // }
        // for(int i=0;i<n;i++)
        // {
        //     if(v1[i]==-1&&v2[i]==-1) 
        //     {
                
        //     }
        //     else if(v1[i]==-1&&v2[i]!=-1) v1[i]=v2[i];
        //     else if(v1[i]!=-1&&v2[i]!=-1) v1[i]=min(v1[i],v2[i]);
            
        // }
        // return v1;
        int n=arr.size();
         vector<int>prev, next;
        stack<int>st;
        
        for(int i=0; i<n; i++){
            
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            if(st.empty()){
                prev.push_back(-1);
            }
            else{
                prev.push_back(st.top());
            }
            st.push(i);
        }
        
        while(!st.empty()){
            st.pop();
        }
        
        for (int i =n - 1; i >= 0; i--){
            
        while (!st.empty() && arr[st.top()] >= arr[i])
        {
            st.pop();
        }
        if (st.empty())
            next.push_back(-1);
        else
            next.push_back(st.top());
            
        st.push(i);
    }
    
    reverse(next.begin(), next.end());

    vector<int> ans;
    for (int i = 0; i < arr.size(); i++){
        if (prev[i] == -1 && next[i] == -1)
            ans.push_back(-1);
            
        else if (prev[i] == -1)
            ans.push_back(next[i]);
            
        else if (next[i] == -1)
            ans.push_back(prev[i]);
            
        else
        {
            if (i - prev[i] == next[i] - i)
            {
                if (arr[prev[i]] <= arr[next[i]])
                    ans.push_back(prev[i]);
                else
                    ans.push_back(next[i]);
            }
            else if (i - prev[i] < next[i] - i)
            {
                ans.push_back(prev[i]);
            }
            else
            {
                ans.push_back(next[i]);
            }
        }
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends