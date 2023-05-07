#define m 1000000007
class Solution {
public:

    long power(int x,int y)
    {
        if(y==1) return x;
        if(y==0) return 1;
        long ans=1;
        if(y%2==0)
        {
         ans=power(x,y/2);
            ans*=ans;
            
        }
        else
        {
             ans=power(x,y-1);
            ans*=x;
        }
        return ans%m;
    }
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int s=0,e=nums.size()-1;int ans=0;
        while(s<=e)
        {
            if(nums[s]+nums[e]<=target)
            {
                ans+=(power(2,e-s))%m;
                ans%=m;
                s++;
            }
            else e--;
        }
        return ans;
    }
};