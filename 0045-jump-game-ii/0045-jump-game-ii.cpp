class Solution {
public:
    int jump(vector<int>& nums) {
        size_t s = nums.size()-1;
        int jumps = 0, last = s;
        while(s > 0)
        {
            for(int i = s-1; i >= 0; --i)
                if(nums[i]+i >= last)
                    s = i;
            jumps++;
            last = s;
        }
        return jumps;
    }
};