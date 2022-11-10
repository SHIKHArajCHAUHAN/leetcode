class Solution {
public:
    int minDeletion(vector<int>& nums) {
      stack<int>s;
        s.push(nums[0]);
        int cnt=0;
        int ans;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==s.top()&&cnt%2==0)
            {
                ans++;
            }
            else
            {
              s.push(nums[i]);
                cnt++;
            }
        }
        if(s.size()%2!=0) ans++;
        return ans;
    }
};