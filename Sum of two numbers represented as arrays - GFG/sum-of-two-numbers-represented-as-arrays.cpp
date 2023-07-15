//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<int> findSum(vector<int> &a, vector<int> &b) {
	    // code here
	   // int num1=0;
	   // int num2=0;
	   // for(int i=0;i<a.size();i++)
	   // {
	   //     num1=num1*10+a[i];
	   // }
	   //  for(int i=0;i<b.size();i++)
	   // {
	   //     num2=num2*10+b[i];
	   // }
	   // num1= num1+num2;
	   // vector<int>v;
	    
	   // while(num1)
	   // {
	   //    v.push_back(num1%10);
	   //    num1/=10;
	   // }
	   // reverse(v.begin(),v.end());
	   // return v;
	     int n=a.size(), m = b.size();
	    if(n==0) return b;
	    else if(m==0) return a;
        int i,j;
        int sum =0, carry = 0;
       
        for( i = n-1, j = m-1; i>=0||j>=0; i--,j--)
        {
            if(m>n)
            {
                if(i>=0)
                {
                    sum = a[i] + b[j] + carry;
                    b[j] = sum%10;
                }
                else
                {
                    sum = b[j] + carry;
                    b[j] = sum%10;
                }
            }
            else 
            {
                if(j>=0)
                {
                    sum = a[i]+b[j]+carry;
                    a[i] = sum%10;
                }
                else
                {
                    sum = a[i]+carry;
                    a[i]=sum%10;
                }
            }
            carry = sum/10;
        }
        
	    if(carry>0)
	    {
	        if(m>n) b.insert(b.begin(),carry);
	        
	        else a.insert(a.begin(),carry);
	    }
	    
	    if(m>n) return b;
	    else return a;
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        Solution ob;
        auto ans = ob.findSum(a, b);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends