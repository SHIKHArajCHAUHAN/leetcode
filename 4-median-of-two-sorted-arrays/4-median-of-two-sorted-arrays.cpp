class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      vector<int>v;
        for(int i=0;i<nums2.size();i++ )
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        double ans;
        if(n%2==0)
        ans=(nums1[n/2-1]+nums1[n/2])/2.0;  
            else ans=nums1[n/2];
        return ans;
    }
};