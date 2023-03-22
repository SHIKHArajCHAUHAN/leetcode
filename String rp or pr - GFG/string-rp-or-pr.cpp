//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
   long long int fn(char ch1, char ch2, int x, int y, string &s)
    {
       stack<int> st;
       long long int ans = 0;
       int n = s.length();
       for(int i = 0; i < n; i++)
       {
           if(!st.empty() && s[st.top()] == ch1 && s[i] == ch2){
               st.pop();
               ans += x;
           }
           else{
               st.push(i);
           }
       }
     
       long long a = 0, b = 0;
       while(st.size() > 1)
       {
           a = 0, b = 0;
           while(!st.empty() && (s[st.top()] == ch1 || s[st.top()] == ch2)){
               if(ch1 == s[st.top()]){
                   a += 1;
               }
               else{
                   b += 1;
               }
               st.pop();
           }
           if(!st.empty())
           st.pop();
           ans += min(a, b) * y;
       }
       return ans;
    }
    long long solve(int X,int Y,string S){
      //code here
    //   string str1 = "pr";
    //     string str2 = "rp";
    //     if(X < Y)
    //     {
    //         swap(X, Y);
    //         swap(str1, str2);
    //     }
    //     long long Score = 0;
    //     int index = S.find(str1);
    //     while(index>=0&&index<S.length())
    //     {
    //         S.erase(index, str1.size());
    //         Score+=X;
    //         index= S.find(str1);//index find kr rhe
    //     }
    //     index = S.find(str2);
    //     while(index>=0&&index<S.length())
    //     {
    //         S.erase(index, str2.size());
    //         Score+=Y;
    //         index = S.find(str2);
    //     }
        
    //     return Score;
      
       if(X > Y)
       return fn('p', 'r', X, Y, S);
     return fn('r', 'p', Y, X, S);
    
    }
};

//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int X,Y;
      cin>>X>>Y;
      string S;
      cin>>S;
      Solution obj;
      long long answer=obj.solve(X,Y,S);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends