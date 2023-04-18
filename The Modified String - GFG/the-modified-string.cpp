//{ Driver Code Starts
#include<bits/stdc++.h>
#define br char xx; cin>>xx; cout<<xx<<endl;
#define lli long long int
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of characters which Ishaan must insert  
    //such that string doesn't have three consecutive same characters.
    int modified (string a)
    {
        // Your code here
        int cnt=0;int cnt2=1;
        for(int i=0;i<a.length()-1;i++)
        {

            if(a[i]==a[i+1])
            {
                cnt2++;
            }
            else cnt2=1;
            if(cnt2>2)
            {
                cnt2=1;
                cnt++;
            }
            
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        Solution obj;
        cout<<obj.modified(a)<<endl;
    }
    return 0;
}

// } Driver Code Ends