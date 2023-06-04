//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str, int x, int y)
    {
        //code here.
          int c=0;
       int d=0;
       for(int i=0;i<str.length();i++)
       {
           if(str[i]== '0')
           c++;
           else
           d++;
       }
       int j=0;
       while(c>0 || d>0)
       {
           for(int i=0;i<x && c>0 ;i++)
           {
               if(c>0)
               str[j]='0';
               j++;
               c--;
           }
            for(int i=0;i<y && d>0 ;i++)
           {
               if(d>0)
               str[j]='1';
               j++;
               d--;
           }
       }
       return str;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s, x, y) << endl;
    }
return 0;
}


// } Driver Code Ends