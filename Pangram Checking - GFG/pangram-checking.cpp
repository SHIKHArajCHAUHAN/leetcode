//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &str) {
        // your code here
        // map<int,vector<char>>mp;
        // vector<int>vis(26,0);
        // for(int i=0;i<26;i++)
        // {
        //     mp[i].push_back(65+i);
        //     mp[i].push_back(97+i);
        // }
        // for(int i=0;i<str.length();i++)
        // {
        //     if(mp.find(str[i])!=mp.end())
        //     {
        //         mp.er
                
        //     }
        // }
        // for(int i=0;i<26;i++)
        // {
        //     if(vis[i]==0) return false;
        // }
        // return true;
        set<char>s;
          for(int i=0;i<str.size();i++)
        {
            if(str[i]>=65 and str[i]<=90) 
               s.insert(str[i]);
              else
              if (str[i]>=97 and str[i]<=122)
               {
                   s.insert(str[i]-32);
               }
              
              
        }
    
          return s.size()==26;
        
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string str;
        getline(cin, str);
        Solution obj;
        if (obj.checkPangram(str) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends