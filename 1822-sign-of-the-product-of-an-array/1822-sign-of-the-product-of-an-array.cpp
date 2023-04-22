class Solution {
public:
    int arraySign(vector<int>& nums) {
     long long pro=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            pro*=(-1);
            if(nums[i]==0) pro*=0;
            if(nums[i]>0)pro*=1;
        }
        if(pro<0)return -1;
        else if(pro>0) return 1;
        else return 0;
    }
};