class Solution {
public:
    int fn(int n)
    {
        int r=0;
        while(n)
        {
            r=r*10+n%10;
            n/=10;
        }
        return r;
    }
    int countDistinctIntegers(vector<int>& nums) {
       set<int>st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
            st.insert(fn(nums[i]));
        }
        return st.size();
    }
};