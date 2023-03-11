class Solution {
public:
    ///not done by self.................................
     vector<vector<long long>> nCr;
    int mod = 1e9 + 7;
    int recr(vector<int> &nums)
    {
        if(nums.empty() || nums.size()==1)  return 1;
        int n = nums.size(), parent = nums.front();
        vector<int> left, right;
        for(auto &i: nums)
        {
            if(i<parent) left.push_back(i);
            if(i>parent) right.push_back(i);
        }
        long long l =  recr(left);
        long long r = recr(right);
        int nr = left.size(), nl = right.size();
        long long ans = nCr[n-1][nr] * l % mod * r % mod;
        return ans;
    }
    int numOfWays(vector<int>& nums) {
        int n = nums.size();
        nCr.resize(n+1);
        for(int i = 1;i<=n;i++)
        {
            nCr[i].resize(i+1,1);
            for(int j=1;j<i;j++)
            {
                nCr[i][j] = (nCr[i-1][j-1] + nCr[i-1][j])%mod;
            }
        }
        int ans = recr(nums);
        return (ans-1+mod)%mod;
    }
};