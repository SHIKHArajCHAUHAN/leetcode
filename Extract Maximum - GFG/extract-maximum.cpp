//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{
  public:
    //int maxx=INT_MIN;
    int extractMaximum(string S) 
    { 
        //code here.
          int maxx=-1;
        S.push_back('a');
        string str="";
        for(int i=0;i<S.length();i++)
        {
            if((S[i]-'0')>=0 && (S[i]-'0')<=9)
            str.push_back(S[i]);
            else
            {
                if(!str.empty()){
                int x=stoi(str);
                maxx=max(maxx,x);
                str="";}
                
            }
        }
        return maxx;
        
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
        cin>>S;
        Solution ob;
        cout<<ob.extractMaximum(S)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends