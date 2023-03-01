class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
      vector<int >v;
        int cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)v.push_back(nums[i]);
           
            
        }
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<nums.size();i++)
        {
             if(nums[i]==pivot)v1.push_back(nums[i]);
            else if(nums[i]>pivot)v2.push_back(nums[i]);
        }
        for(int i=0;i<v1.size();i++)
        {
            v.push_back(v1[i]);
        }
         for(int i=0;i<v2.size();i++)
        {
            v.push_back(v2[i]);
        }
        return v;
    }
};