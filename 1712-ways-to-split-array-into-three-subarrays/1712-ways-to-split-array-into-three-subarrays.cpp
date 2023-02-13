
#define M 1000000007
class Solution {
public:
    int waysToSplit(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixSum(n,0);
        prefixSum[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefixSum[i]=prefixSum[i-1]+nums[i];
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            int low=i+1,high=n-2,l=-1,r=-1,mid;

            while(low<=high)
            {
                mid=(low+high)/2;
                if(prefixSum[i]<=prefixSum[mid]-prefixSum[i])
                {
                    l=mid;
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            low=i+1,high=n-2;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(prefixSum[mid]-prefixSum[i]<=prefixSum[n-1]-prefixSum[mid])
                {
                    r=mid;
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
            if(l==-1||r==-1||l>r)
            continue;
            res=(res+(r-l+1))%M;
        }
        return res;
        
    }
};