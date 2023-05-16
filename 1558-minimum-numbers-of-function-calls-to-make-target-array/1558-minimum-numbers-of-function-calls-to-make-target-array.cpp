class Solution {
public:
    int minOperations(vector<int>& nums) {
     //ulta jao
         int n=nums.size();
        int cnt=0;
        vector<int> target(n,0);
        while(nums!=target)
        {
            for(int i=0; i<n; i++)
            {
                if(nums[i]%2)
                {
                    nums[i]-=1;
                    cnt++;
                }
            }
            if(nums==target) return cnt;
            for(int i=0; i<n; i++)
            {
                nums[i]/=2;
            }
            cnt++;
        }
        return cnt;
    }
};