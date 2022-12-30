class Solution {
public:
    int fn(vector<int>n)
    {
        int xorr=0;
        for(int i=0;i<n.size();i++)
        {
            xorr^=n[i];
        }
        return xorr;
    }
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
       /* int xorr=0;
        for(int i=0;i<nums1.size();i++)
        {
            int x=nums1[i];
            for(int j=0;j<nums2.size();j++)
            {
               xorr^=(nums2[j]^x); 
            }
        }
        return xorr;*/
        int x = 0, m = nums1.size() , n = nums2.size();
        if(m % 2 == 0 && n % 2 == 0)
            return 0;
        if(m % 2 == 1 && n % 2 == 1)
            return fn(nums1) ^ fn(nums2);
        if(m % 2 == 1)
            return fn(nums2);
        return fn(nums1);
    }
};