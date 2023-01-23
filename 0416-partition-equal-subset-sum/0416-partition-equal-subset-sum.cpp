class Solution {
public:
    bool subset(vector<int>num,int sum)
    {
        bool v[num.size()+1][sum+1];
        for(int i=0;i<num.size()+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(i==0)v[i][j]=false;
                if(j==0) v[i][j]=true;
            }
        }
        for(int i=1;i<num.size()+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(num[i-1]<=j)
                {
                    v[i][j]=v[i-1][j-num[i-1]]||v[i-1][j];
                }
                else v[i][j]=v[i-1][j];
            }
        }
        return v[num.size()][sum];
        
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        if(sum%2==1) return false;
        return subset(nums,sum/2);
    }
};