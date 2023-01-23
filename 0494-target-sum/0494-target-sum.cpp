class Solution {
public:
    int subset(vector<int>num,int sum)
    {
        int v[21][10001];
        for(int i=0;i<num.size()+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(i==0)v[i][j]=0;
                if(j==0) v[i][j]=1;
            }
        }
        for(int i=1;i<num.size()+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(num[i-1]<=j)
                {
                    v[i][j]=v[i-1][j-num[i-1]]+v[i-1][j];
                }
                else v[i][j]=v[i-1][j];
            }
        }
        return v[num.size()][sum];
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
         if(target>sum || (sum-target)%2){
            return 0;
        }
        int sub=(target+sum)/2;
       if(sub<0)return 0;
        return subset(nums,sub);
    }
};