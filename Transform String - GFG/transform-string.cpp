//{ Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
        int na=A.length();
        int nb=B.length();
        if(na!=nb) return -1;
        map<char,int>ma,mb;
        for(int i=0;i<na;i++)
        {
            ma[A[i]]++;
        }
        for(int i=0;i<nb;i++)
        {
            if(ma.find(B[i])==ma.end())
            {
                return -1;
            }
            else
            {
                ma[B[i]]--;
                if(ma[B[i]]<0)
                {
                    return -1;
                }
            }
        }
        int cnt=0;
        int x=nb-1;
        for(int i=na-1;i>=0;i--)
        {if(A[i]==B[x])
            x--;
            else
            cnt++;
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}
// } Driver Code Ends