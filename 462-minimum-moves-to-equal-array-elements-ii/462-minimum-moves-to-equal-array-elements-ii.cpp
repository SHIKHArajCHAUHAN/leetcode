class Solution {
public:
    int minMoves2(vector<int>& nums) {
        //1,2,9,10 mid=9bbbb 1,2,3 mid 2 usk baad lower and uper to incre or decre krna h
        int ans=0;
        sort(nums.begin(),nums.end());
        int mid=nums.size()/2;
        for(int i=0;i<nums.size();i++)
        {
            ans=ans+abs(nums[i]-nums[mid]);
        }
        return ans;
    }
};