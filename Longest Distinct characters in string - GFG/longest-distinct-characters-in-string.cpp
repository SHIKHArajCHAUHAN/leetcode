//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
   /* map<char,int>mp;
    int maxx=INT_MIN;
    int n=S.length();
    int i=0,j=0;
    while(j<=n)
    {
        mp[S[i]]++;
        
        if(mp.size() == j-i+1){
        maxx = max(maxx, j-i+1);
            j++;
        }
        else if(mp.size() < j-i+1){

            while(mp.size() < j-i+1){
                mp[S[i]]--;

                if(mp[S[i]] == 0){
                    mp.erase(S[i]);
                }
                i++;
            }
            j++;
        }
    }
    return maxx;*/
    string s="";
    int mx=1;
    int j=0;
    for(int i=j;i<S.size();i++)
    {
       if(s.find(S[i])!=-1)
       {
           s="";
            j++;
            i=j;
           s+=S[i];
       }
       else
       {
           s+=S[i];
       }
       int a=s.size();
       mx=max(mx,a);
    }
    return mx;
    
}