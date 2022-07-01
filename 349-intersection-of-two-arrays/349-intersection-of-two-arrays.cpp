class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      vector<int>ans;
        int n1=nums1.size();
        int n2=nums2.size();
        
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(nums1[i]==nums2[j])
                    ans.push_back(nums1[i]);
            }
        }
        vector<int>::iterator i;
        sort(ans.begin(),ans.end());
        i=std::unique(ans.begin(),ans.end());

          ans.resize(std::distance(ans.begin(),i));  
      return ans;      
            
    }
};