//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minChange(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << minChange(s) << endl;
    }
return 0;
}

// } Driver Code Ends


int minChange(string S) { 
     //complete the function here
       if(S.size() == 0)
        return 0;
    
   map<int,int>mp;
    
    for(int i = 0; i < S.size(); i++)
        mp[S[i] - 'a']++;
    
    int cnt = 0;
    for(int i = 0; i < 26; i++)
    {
        if(mp[i] > 1)
            cnt +=mp[i] - 1;
    }
    
    return cnt;
} 
