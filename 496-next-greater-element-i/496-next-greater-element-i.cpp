class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ankit;
        for(int i=0;i<nums1.size();i++)
        {
            int j;
            for( j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                break;
                
            }
            int ans=-1;
            while(j<nums2.size())
            {
                if(nums2[j]>nums1[i])
                {
                    ans=nums2[j];
                   break;
                }
                j++;
                
            }
            ankit.push_back(ans);
            
        }
        return ankit;
    }
};