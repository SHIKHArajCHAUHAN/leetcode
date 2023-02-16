//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
    
public:
	long long int closestPalindrome(long long int num){
	    // Code here
	    long long int digits=0,n=num;

     while(n){

         digits++;

         n/=10;

     }

     if(digits==1)

         return num;

     vector<long long int>candidates={(long long int)pow(10,digits)+1,(long long int)pow(10,digits)-1,

     (long long int)pow(10,digits-1)+1,(long long int)pow(10,digits-1)-1};

     long long int mid=(digits+1)/2;

     long long int prefix=num/(long long int)(pow(10,digits-mid));

     vector<long long int>v={prefix,prefix-1,prefix+1};

     for(auto i:v){

         string s=to_string(i);

         if(digits%2!=0)

             s.pop_back();

         reverse(s.begin(),s.end());

         string c=to_string(i)+s;

         candidates.push_back(stoll(c));

     }

     sort(candidates.begin(),candidates.end());

     long long int ans1,diff1;

     long long int ans2,diff2;

     for(int i=0;i<candidates.size();i++){

         if(candidates[i]<=num){

             diff1=num-candidates[i];

             ans1=candidates[i];

         }

         else

             break;

     }

     for(int i=candidates.size()-1;i>=0;i--){

         if(candidates[i]>=num){

             diff2=candidates[i]-num;

             ans2=candidates[i];

         }

         else

             break;

     }

     if(diff1==diff2)

         return min(ans1,ans2);

     if(diff1<diff2)

         return ans1;

     return ans2;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int num;
		cin >> num;
		Solution obj;
		long long int ans = obj.closestPalindrome(num);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends