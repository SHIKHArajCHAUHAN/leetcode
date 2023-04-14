//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string transform(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << transform(s) << endl;
    }
return 0;
}


// } Driver Code Ends


string transform(string S){
    //complete the function here
    int cnt=1;
    int n=S.length(); 
    string str="";
    for(int i=0;i<n;i++)
    {
          if(tolower(S[i]) == tolower(S[i+1]))
           cnt++;
         else{
             str+=to_string(cnt);
             str+=tolower(S[i]);
             cnt=1;
         }
         
    }
    return str;
    
}

