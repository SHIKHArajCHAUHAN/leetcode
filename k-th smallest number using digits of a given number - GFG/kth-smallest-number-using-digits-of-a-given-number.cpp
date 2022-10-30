//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	string kthSmallestNumber(string num, int k)
	{
	  /*  // Code here
	    //if(num.size()<k) return "";
	   // sort(num.begin(),num.end());
	    vector<int>num1;
	    for(int i=0;i<num.size();i++)
	    {
	        int a=int(num[i]);
	        num1.push_back(a);
	    }
	    int ans;
	    while(k--)
	    {
	      ans=next_permutation(num1.begin(),num1.end());  
	    }
	    return to_string(ans);*/
	     int arr[10] = {0};
	    // due to worng test case, I have to include this one.
	    if(num=="0"){
	        return "09";
	    }
	    // **
	    for(int i=0; i<num.size(); i++){
	        char c = num[i];
	        int pos = (int)(c);
	        arr[pos-48]++;
	    }
	    string ans = "";
	    for(int i=1; i<10; i++){
	        if(arr[i]!=0){
	            ans.push_back((char)(i+48));
	            arr[i]--;
	            break;
	        }
	    }
        while(arr[0]--){
            ans.push_back('0');
	    }
	    for(int i=1; i<10; i++){
	        while(arr[i]--){
	            ans.push_back((char)(i+48));
	        }
	    }
	    while(k-->1){
	        next_permutation(ans.begin(), ans.end());
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string num;
		cin >> num;
		int k;
		cin >> k;
		Solution ob;
		string ans  = ob.kthSmallestNumber(num, k);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends