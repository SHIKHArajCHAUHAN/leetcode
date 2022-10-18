//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
  public:
    int rightmostNonZeroDigit(int N, int A[]){
       /* int prod=1;
        for(int i=0;i<N;i++)
        {
            prod*=A[i];
        }
        string s=to_string(prod);
        int ans=-1;
        for(char i=s.length()-1;i>=0;i--)
        {
            if(s[i]!='0') 
            {ans=int(s[i]-'0'); break;}
        }
        return ans;*/
       if (N != 0) {
            int sumOf5s = 0;
            int multiplicationResult = 1;
            for (int i = 0; i < N; i++) {
                while (A[i] > 0 && A[i] % 5 == 0) {
                    A[i] /= 5;
                    sumOf5s++;
                }
            }
            for (int i = 0; i <N; i++) {
                while (sumOf5s != 0 && A[i] > 0 && (A[i] & 1) == 0) {
                    A[i] >>= 1;
                    sumOf5s--;
                }
            }
            for (int i = 0; i < N; i++) {
                multiplicationResult = (multiplicationResult * (A[i] % 10)) % 10;
            }
            if (sumOf5s != 0) {
                multiplicationResult = (multiplicationResult * 5) % 10;
            }
            if (multiplicationResult != 0) return multiplicationResult;
        }
        return -1;
   }
    
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        Solution ob;
        cout << ob.rightmostNonZeroDigit(n, A) << endl;
    }
    return 0; 
} 
// } Driver Code Ends