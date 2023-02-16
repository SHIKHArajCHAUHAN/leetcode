//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string buildLowestNumber(string num, int k);
// Driver program to test above function
int main()
{
    int t,n;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cin>>str;
    cout << buildLowestNumber(str, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends


string buildLowestNumber(string num, int k)
{
    //code here.
     stack<char>st;
        int n=num.size();
        for(auto i:num)
        {
            while(!st.empty()&&k>0&&st.top()>i)
            {
                st.pop();k--;
            }
            if(!st.empty()||i!='0'){
                st.push(i);
            }
        }
            while(!st.empty()&&k--)
            {
                st.pop();
                if(st.empty()) return "0";
            }
        if(st.size()==0)return "0";
            while(!st.empty())
            {
                num[n-1]=st.top();
                st.pop();
                n--;
            }
    
        return num.substr(n);
}