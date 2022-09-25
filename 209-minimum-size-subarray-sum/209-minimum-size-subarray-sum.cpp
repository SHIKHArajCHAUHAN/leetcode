class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int n=nums.size();
        int i=0,j=0;
        int sum=0;
        int minn=INT_MAX;
        while(j<n)
        {
           sum+=nums[j];
            if(sum<target)
            {j++; 
            }
           
            else if(sum>=target)
            {minn=min(minn,j-i+1);
                while(sum>=target)
                {
                    minn=min(minn,j-i+1);
                    sum-=nums[i];
                  i++;
                }j++;
            }
        }
        if(minn==INT_MAX) return 0;
        return minn;
    }
};