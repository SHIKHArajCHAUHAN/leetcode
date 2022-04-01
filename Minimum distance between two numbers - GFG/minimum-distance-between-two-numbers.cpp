// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int mind=INT_MAX,i,p=-1,j;
        for(int i=0;i<n;i++){
          /*  for(int j=i+1;j<n;j++){
            if((x==a[i]&&y==a[j]||y==a[i]&&x==a[j])&&min>abs(i-j)){
            mind= abs(j-i);
            }
       }
       }if(min>n){
    return -1;}
    return min;}*/
    if(a[i]==x||a[i]==y){
        if(p!=-1&& a[i]!=a[p])
        mind=min(mind,i-p);
        p=i;}
         }
         if(mind==INT_MAX)
        return -1;
        return mind;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
  // } Driver Code Ends