class Solution {
public:
    map<int,vector<int>>mp;
    Solution(vector<int>& nums) {
      for(int i=0;i<nums.size();i++)
      {
          mp[nums[i]].push_back(i);// jo jo same aayyy usk freq nhi index dalna hai
      }
    }
    
    int pick(int target) {
      int a=mp[target].size();
        int r=rand()%a;
       return mp[target][r]; 
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */