//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<int> twoOddNum(int Arr[], int N)  
    {
        // code here
       vector<int>v;
      /*  map<int,int>mp;
        for(int i=0;i<N;i++)
        {
            mp[Arr[i]]++;
        }
        for(auto i:mp)
        {
            if(i.second%2==1) v.push_back(i.first);
        }
        reverse(v.begin(),v.end());
        return v;*/
        int xsum=0;
        int res1=0,res2=0;
         for(int i=0;i<N;i++)
         {
            xsum=xsum^Arr[i];
         }
        int Sn = xsum & ~(xsum -1);
        
        for(int i=0;i<N;i++) {
            if((Arr[i] & Sn) != 0)
                res1 = res1 ^ Arr[i]; 
            else 
            res2 = res2 ^ Arr[i];
        }
    
        if(res1 > res2) {
            v.push_back(res1);
            v.push_back(res2);
        } else {
            v.push_back(res2);
            v.push_back(res1);
        }
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int Arr[N];
        for(int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<int>ans=ob.twoOddNum(Arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends