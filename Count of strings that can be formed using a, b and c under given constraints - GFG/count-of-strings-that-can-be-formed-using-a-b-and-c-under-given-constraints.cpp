//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int countStr(long long int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        cout << countStr(n) << endl;
    }
return 0;
}
// } Driver Code Ends


long long int countStr(long long int n){
    //complete the function here
   /* long long ans=0;
        ans=1;//bss a y liy

    ans+=n*(n-1);//ek b ya ek c k liy 
ans+=2*n;
    ans+=n*(n-1)*(n-2); //jb dono b or c ek 2 present ho
    ans+=n*(n-1)/2;
    return ans;*/
       return (n*n*n + 3*n +2)/2;
    
}