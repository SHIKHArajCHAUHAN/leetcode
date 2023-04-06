//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
   bool isprime(int n){

       if(n==2){

           return true;}
       if(n==0 || n==1){

           return false;

       }

       for(int i=2;i*i<=n;i++){

           if(n%i==0){

               return false;

           }

       }return true;}
 int superPrimes(int n)

 {

     vector<int>v;int cnt=0;

     for(int i=2;i<=n;i++){

         if(isprime(i)){

             v.push_back(i);}
     }
     for(auto it:v){

         if(isprime(it-2)){

             cnt++;
         }}
     return cnt;

 }
};

//{ Driver Code Starts.

int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
   		Solution ob;
   		cout << ob.superPrimes(n) << "\n";
   	}

    return 0;
}

// } Driver Code Ends