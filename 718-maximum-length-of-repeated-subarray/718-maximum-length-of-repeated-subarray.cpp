class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
         vector<vector<int>> dp(nums1.size()+1, vector<int>(nums2.size()+1, 0));
        int i, j, ans = 0;
        int n1=nums1.size();
        int n2=nums2.size();
        for (i=n1-1; i >= 0; i--) {
            for (j=n2-1; j >= 0; j--) {
                if (nums1[i] == nums2[j]) {
                    dp[i][j] = 1 + dp[i+1][j+1];
                    if (dp[i][j] > ans)
                        ans= dp[i][j];
                }
            }
        }
        return ans; 
    }
};