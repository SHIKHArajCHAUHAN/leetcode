class Solution {
public:
    int distinctAverages(vector<int>& nums) {
      sort(nums.begin(),nums.end());
        set<float>s;
       // float f=float(nums[0]+nums[nums.size()-1])/(float)2;
        for(int i=0;i<nums.size()/2;i++)
        {
            s.insert(float(nums[i]+nums[nums.size()-1-i])/(float)2);
        }
        return s.size();
    }
};