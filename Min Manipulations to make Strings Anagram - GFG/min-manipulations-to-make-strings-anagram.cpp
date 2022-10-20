//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int minManipulation (int n, string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << minManipulation (n, s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minManipulation (int N, string S1, string S2)
{
    // your code here
map<char,int>mp1,mp2;
for(auto i:S1)
{
    mp1[i]++;
}
for(auto i:S2)
{
    mp2[i]++;
}
int ans=0;
for(auto i:mp2)
    {
        if(mp1.find(i.first)==mp1.end())
        {
    ans+=i.second;
        }
        else
        {
 if(i.second > mp1[i.first])
            {
  ans += i.second-mp1[i.first];
            }
        }
    }
    return ans;
}