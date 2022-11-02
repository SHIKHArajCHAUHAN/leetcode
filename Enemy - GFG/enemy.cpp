//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            //  code here
            vector<int>v1(n,0);
            vector<int>v2(m,0);
            for(int i=0;i<enemy.size();i++)
            {
                v1[enemy[i][0]-1]=-1;
                v2[enemy[i][1]-1]=-1;
            }
              int maxrow = 0;
            int maxcol = 0;
            int cntr = 0;
            int cntc = 0;
    
            for(int i=0;i<n;i++)
            {
                if(v1[i]!=-1) cntr++;
                else cntr=0;
            
            maxrow=max(maxrow,cntr);}
            
            for(int i=0;i<m;i++)
            {
                if(v2[i]!=-1) cntc++;
                else cntc=0;
            
            maxcol=max(maxcol,cntc);}
            return maxrow*maxcol;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int k;
        cin>>k;
        vector<vector<int>> e(k,vector<int>(2));
        for(int i=0;i<k;i++)
            cin>>e[i][0]>>e[i][1];
        Solution a;
        cout<<a.largestArea(n,m,k,e)<<endl;
    }
    return 0;
}
// } Driver Code Ends