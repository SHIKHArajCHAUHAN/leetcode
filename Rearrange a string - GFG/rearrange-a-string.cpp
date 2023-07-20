//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        //code here.
       int n = str.size();
        int sum = 0;
        string ans = "";
        for(int i=0;i<n;++i){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                ans.push_back(str[i]);
            }else{
                sum += int(str[i])-48;
            }
        }
        
        sort(ans.begin(),ans.end());
        if(sum>=1) ans += to_string(sum);
        
        return ans;  
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}


// } Driver Code Ends