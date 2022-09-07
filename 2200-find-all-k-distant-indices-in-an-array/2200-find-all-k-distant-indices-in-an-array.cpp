class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
       vector<int>v;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==key)
            {
    
            for(int j=0;j<nums.size();j++)
    
            {
                if(abs(i-j)<=k)
                    mp[j]++;
                    
            }
        }
        }
        for(auto i:mp)
        {
            v.push_back(i.first);
        }
        return  v;
    }
};