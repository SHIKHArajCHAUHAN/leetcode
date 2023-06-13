//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


vector<int> reaching_height(int n, int a[]) ;

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int n; 
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) 
	        cin >> a[i];
	    vector<int> v;
	    v = reaching_height(n,a);
	
	    if(v.size()==1 and v[0] == -1){
	        cout << "Not Possible\n";
	    }
	    else{
	    for(int i:v)
	        cout << i << " ";
	    cout << endl;}
	    
	}
	return 0;
}
// } Driver Code Ends


//User function Template for C++

vector<int> reaching_height(int n, int a[]) {
    // Complete the function
    // sort(a,a+n);
    // reverse(a,a+n);
    // vector<int>v;
    // int sum1=0,sum2=0;
    // for(int i=0;i<=(n-1)/2;i++)
    // {
    //   v.push_back(a[i]);sum1+=a[i];
    //   if(i!=n-1-i)v.push_back(a[n-1-i]),sum2+=a[n-1-i];
    // }
    // //if(n%2!=0)v.push_back(a[n/2]);
    // if(sum1==sum2)return {-1};
    // return v;
     sort(a , a+n);
    reverse(a , a+n);
    if(a[0] == a[n-1] && n != 1){
        return {-1};
    }
    vector<int> ans;
    int i= 0 , j  = n-1;
    while(i < j){
        ans.push_back(a[i++]);
        ans.push_back(a[j--]);
    }
    if(n & 1){
        ans.push_back(a[i]);
    }
    
    return ans;
}
