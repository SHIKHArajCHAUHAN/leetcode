//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        if(nums.size()%2!=0) return false;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]%k]++;
           // nums[i]=nums[i]%k;
        }
        // sort(nums.begin(),nums.end());
        // int s=0;
        // int e=nums.size()-1;
        // while(s<e)
        // {
        //     if(nums[e]==0&&nums[s]==0){
        //         e--,s++;
        //     }
        //     else if(nums[s]+nums[e]!=k) return false;
        //     else
        //     {
        //         e--;s++;
        //     }
        // }
        // return true;
         if(mp[0]%2==1)
        return false;
        for(int i=1;i<k;i++)
        {
            if(mp[i]!=mp[k-i])
            return false;
        }
        return true;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends