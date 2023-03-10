class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        sort(nums.begin(),nums.end());
        int GCD=numsDivide[0];
        for(int i=1;i<numsDivide.size();i++)
        {
            GCD=__gcd(GCD,numsDivide[i]);
        }
        int cnt=0;bool flag=false;
        for(int i=0;i<nums.size();i++)
        {
            if(GCD%nums[i]==0)
            {
                flag=true;break;
            }
            else cnt++;
        }
    if(flag==false)return -1;
        return cnt;
    }
};