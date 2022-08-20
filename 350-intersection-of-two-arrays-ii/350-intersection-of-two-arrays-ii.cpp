class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      vector<int>v;
        map<int,int>mp;
        for(int i=0;i<nums1.size();i++)
        {
        mp[nums1[i]]++;
        }
        for(auto i:nums2)
        {
            if(mp[i]>0)
            {
           v.push_back(i);
               mp[i]--;
        }
        }
        return v;
    }
};