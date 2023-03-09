class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>v;
        long long ans=0;
        for(int i=1;i*i<=k;i++)
        {
            if(k%i==0)v.push_back(i);
            if((k/i)!=i&&k%i==0) v.push_back(k/i);
        }
        for(int i=0;i<nums.size();i++)
        {
            ans+=(mp[k/(__gcd(nums[i],k))]);
            for(auto j:v)
            {
                if(nums[i]%j==0)mp[j]++;
            }
        }
        return ans;
    }
};