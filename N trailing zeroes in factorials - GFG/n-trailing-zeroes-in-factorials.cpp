//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public: int countZeroes(int n){
        // code here
       
        int low=1, high=n*5, ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int temp=cal(mid);
            if(temp==n)
            {
                ans=mid;
                break;
            }
            else if(temp>n) high=mid-1;
            else low=mid+1;
        }
        
        if(ans==0) return 0;
        return 5;
        
    }
    int cal(int n)
    {  int count = 0;
 
        for (int i = 5; n / i >= 1; i *= 5)
            count += n / i;
 
        return count;
    }
//  int count(int n){
//         // Code here
//         int den=5;
//         int zero=0;
//         while(n>=den)
//         {
//             zero+=(n/den);
//             den*=5;
//         }
//         return zero;
//     }

//     int countZeroes(int n){
//         // Code here
//         int low=0,high=5*n;
//     int ans=low;
//     while(low<=high)
//     {
//         int mid=(low+high)/2;
//         int zero=count(mid);
//         if(zero>=n)
//         {
//             ans=mid;
//             high=mid-1;
            
//         }
//         else
//         {
//             low=mid+1;
//         }
//     }
//     return ans;
//     }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
    	 int n;
    	 cin>>n;
    	 Solution obj;
    	 cout << obj.countZeroes(n);
    	 cout <<endl;
	}
	return 0;
}


// } Driver Code Ends