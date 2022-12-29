//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isDivisibleBy10(string bin) {
        // code here
       /* reverse(bin.begin(),bin.end());
        int deci=0;
        for(int i=0;i<bin.size();i++)
        {
            deci+=(bin[i]-'0')*pow(2,i);
        }
        if(deci%10==0) return 1;
        else return 0;*/
        int sum=0,n=bin.length()-1;
int p[4]={6,2,4,8};
for(int i=n,j=0;i>=0;i--,j++){
if(bin[i]=='1')
if(i!=n)
sum+=p[j%4];
else
sum++;
}
return sum%10==0;

    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        string bin;
        cin >> bin;
        Solution ob;
        cout << ob.isDivisibleBy10(bin);
        cout << endl;
    }
}
// } Driver Code Ends