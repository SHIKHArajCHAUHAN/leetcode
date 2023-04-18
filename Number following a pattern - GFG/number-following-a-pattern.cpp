//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        string str="";
        int num=1;
        stack<int>st;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='D')
            {
                st.push(num);
                num++;
            }
            else
            {
               st.push(num);
                num++;
                while(!st.empty())
                {
                    str.push_back(st.top()+'0');
                    st.pop();
                }
            }
        }
           st.push(num);
            while(!st.empty())
                {
                    str.push_back(st.top()+'0');
                    st.pop();
                }
        
        return str;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends