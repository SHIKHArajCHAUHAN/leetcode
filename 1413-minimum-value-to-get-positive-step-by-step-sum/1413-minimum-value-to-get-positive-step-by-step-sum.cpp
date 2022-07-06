class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n =nums.size();
      int min=nums[0];
    int pre[n];
        pre[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+nums[i];
            if(min>pre[i])
                min=pre[i];
        }
        if(min>=1) return 1;
          //  return 1-min;
    else
        return 1-min;
    }
};