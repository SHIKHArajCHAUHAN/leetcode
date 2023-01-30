class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n1=*max_element(nums.begin(),nums.end());
        int n2=*min_element(nums.begin(),nums.end());
        int ans=-1;
        for(int i=1;i<=n1&&i<=n2;i++)
        {
            if(n1%i==0&&n2%i==0)ans=i;
        }
        return ans;
    }
};