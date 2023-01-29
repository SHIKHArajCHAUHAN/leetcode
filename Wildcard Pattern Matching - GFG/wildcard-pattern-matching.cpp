//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
/*You are required to complete this method*/
bool solve(string pat,string s, int n,int m){
 if(n==0&&m==0) {

            return true;

        }
        else if(n==0&&m!=0) return false;

        else if(n>0&&m<=0) {

            for(int l=n-1; l>=0;l--){

                if(pat[l]!='*') return false;

            }
             return true;
        }

        if(pat[n-1]==s[m-1]||pat[n-1]=='?'){

            return solve(pat,s,n-1,m-1);
        }
        else if(pat[n-1]=='*'){
            return solve(pat,s,n-1,m)||solve(pat,s,n,m-1);}
        return false;}
    int wildCard(string pattern,string str)
    {
       if(pattern.back()=='*'){
            reverse(pattern.begin(),pattern.end());
            reverse(str.begin(),str.end());}
        return solve(pattern,str,pattern.length(),str.length()) ;
        
    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
           string pat,text;
           cin>>pat;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
           cin>>text;
           Solution obj;
           cout<<obj.wildCard(pat,text)<<endl;
   }
}

// } Driver Code Ends