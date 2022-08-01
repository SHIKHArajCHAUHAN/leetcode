class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
      pair<int,int>p;
        int sum=0;
        int n=nums.size();
       sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=2)
        {
            p=make_pair(nums[i],nums[i+1]);
            sum+=min(p.first,p.second);
        }
        return sum;
    }
};