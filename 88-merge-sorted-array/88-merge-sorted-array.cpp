class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>nums3;
    //  std:: merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums3.begin());
    //   int o=nums3.size();
     for(int i=0;i<n;i++){
            nums1[m+i]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
        
            }
};