class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        int n = nums.size();
        int ans = 0;
        vector<int> prefixSum(n + 1, 0), DP1(n + 1, 0), DP2(n + 1, 0);
        for(int i = 1; i <= n; i++) {
            prefixSum[i] += prefixSum[i - 1] + nums[i - 1];
            if(i >= firstLen)
                DP1[i] = max(DP1[i - 1], prefixSum[i] - prefixSum[i - firstLen]); 
            if(i >= secondLen)
                DP2[i] = max(DP2[i - 1], prefixSum[i] - prefixSum[i - secondLen]); 
        }
        for(int i = firstLen + secondLen; i <= n; i++) {
            int A = prefixSum[i] - prefixSum[i - secondLen] + DP1[i - secondLen];
            int B = prefixSum[i] - prefixSum[i - firstLen] + DP2[i - firstLen];
            ans = max(ans, max(A, B));
        }
        return ans; 
    }
};