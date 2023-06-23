//{ Driver Code Starts

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public:
   int countFactors(int N){
        int cnt=0;
        for(int i=1;i<=sqrt(N);i++){
            if(N%i==0){
                cnt++;
                if(i!=N/i){
                    cnt++;
                }
            }
        }
        return cnt;
    }

    int count(int A,int B,int N){ 
        
        int val=0;
        
        for(int i=A;i<=B;i++){
            if(countFactors(i)==N){
                val++;
            }
        }
        return val;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,N;
        cin>>A>>B>>N;
        Solution ob;
        cout << ob.count(A,B,N) << endl;
    }
    return 0; 
}
// } Driver Code Ends