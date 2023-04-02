//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
vector<int>v;
void store(int last,int n,int curnum)
{
    if(n==0)
    {
        v.push_back(curnum);return;
    }
    for(int i=last;i<=9;i++)
    {
        int a=curnum*10+i;
        store(i+1,n-1,a);
    }
}
    vector<int> increasingNumbers(int N)
    {
        // Write Your Code here
        if(N==1)
        {
            for(int i=0;i<=9;i++)
            {
                v.push_back(i);
            }
            return v;
        }
        else{
            store(1,N,0);
            
        }
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans = ob.increasingNumbers(N);
        for(auto num : ans){
            cout<< num <<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends