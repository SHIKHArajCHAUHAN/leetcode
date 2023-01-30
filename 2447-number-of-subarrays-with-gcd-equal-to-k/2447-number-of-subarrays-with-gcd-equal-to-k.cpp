class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            int hcf=0;
            for(int j=i;j<nums.size();j++)
            {
                hcf=gcd(nums[j],hcf);
                if(hcf==k)cnt++;
            }
        }
        return cnt;
    }
};