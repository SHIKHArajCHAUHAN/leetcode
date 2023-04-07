//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{  
    
public:
    long long int nineDivisors(long long int N){
        //Code Here
        ////// (pow(p,2)*pow(q,2)) or pow(p,8)  means q=sqrt(n)/p will give us the corrent reuired output
        //i=sqrt(n)
                long long int limit=sqrt(N)+1;

        vector< long long int>s(limit+1,1);

        vector< long long int>primes;

        for( long long int i=2;i<=limit;i++){

            if(s[i]){

                primes.push_back(i);

                for( long long int j=i*i;j<=limit;j+=i){

                    s[j]=0;

                }

            }

        }

         long long int cnt=0;

        int n=primes.size();

        for(int i=0;i<n;i++){

            if(pow(primes[i],8)<=N)

                cnt++;

            for(int j=i+1;j<n;j++){

                if(pow(primes[i],2)*pow(primes[j],2)<=N)

                    cnt++;

            }

        }

        return cnt;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.nineDivisors(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends