//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
            int n = arr.size(),maxsum =INT_MIN;
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n-2;i++){


            int left=i+1,right=n-1;
            
            while(left< right){


                int sum = arr[i]+arr[left]+arr[right];


                if(sum == target){
                    return sum;
                }
                
                if(abs(target-sum) < abs(target-maxsum) ){
                    maxsum = sum;
                }
                if(abs(target-sum) == abs(target-maxsum)){
                    maxsum = max(maxsum,sum);
                }
                
                if(sum > target){
                    right--;
                }
                else{
                    
                    left++;
                    
                }
            }
        }
        
        return maxsum;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--) {
        
        int n,target;
        cin >> n >> target;
        
        vector<int> vec(n);
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> vec[i];
        Solution obj;
        cout << obj.threeSumClosest(vec, target) << "\n";
    }
}

//Position this line where user code will be pasted.

// } Driver Code Ends