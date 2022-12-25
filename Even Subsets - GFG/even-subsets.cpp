//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*Function to count subset with even sum
* arr : array input
* N : size of array
*/
class Solution{
  public:
    int countSumSubsets(int arr[], int N){
        
        // Your code here
             vector<vector<int>>subset;
    
        for(int i=0;i<(1<<N);i++)
        {
                vector<int>v;

            for(int j=0;j<N;j++)
            {
                if(i&(1<<j))
                   v.push_back(arr[j]);
            }
            subset.push_back(v);
        }
        int cnt=0;
        for(int i=0;i<subset.size();i++)
        {
            int sum=0;
            for(int j=0;j<subset[i].size();j++)
            {
                sum+=subset[i][j];
            }
            if(sum%2==0)cnt++;
        }
        return cnt-1;
        
    }
};

//{ Driver Code Starts.

// Driver code to test columnWithMaxZeros function
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    int arr[N];
	    
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	            cin >> arr[i];
	        }
	    Solution obj;
	    cout << obj.countSumSubsets(arr, N) << endl;
	}
	
	return 0;
}
// } Driver Code Ends