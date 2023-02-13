//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
string sumof(string str1 , string str2){
        reverse(str1.begin() , str1.end());
        reverse(str2.begin() , str2.end());
        int carry = 0;
        int m = str1.length();

        int n=str2.length();
        int i=0;

        int j=0;
        string ans = "";
        while(i<m && j<n)

        {

            int dig1 = str1[i] -'0';

            int dig2 = str2[j] -'0';

            int sum = dig1+dig2 + carry;
            carry = sum /10;

            sum = sum % 10;

            ans += to_string(sum);
            i++;

            j++;
        }
         while(i<m)

        {

            int dig1 = str1[i] -'0';

            int sum = dig1 + carry;

            carry = sum /10;

            sum = sum % 10;

            ans += to_string(sum);

            i++;
        }
        while(j<n)

        {

            int dig2 = str2[j] -'0';

            int sum = dig2 + carry;

            carry = sum /10;

            sum = sum % 10;

            ans += to_string(sum);

            j++;
        }
        if(carry > 0){

            ans += to_string(carry);
        }
         while(ans.back()=='0') ans.pop_back();
        reverse(ans.begin() , ans.end());
        return ans;
    }
    string solve(int arr[], int n) {
        // code here
        sort(arr,arr+n);
        string s1="";
        string s2="";
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
           s1+=to_string(arr[i]); 
           else s2+=to_string(arr[i]);
        } //reverse(s1.begin(),s1.end());
    return sumof(s1,s2);
       // return to_string(x);
     
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends