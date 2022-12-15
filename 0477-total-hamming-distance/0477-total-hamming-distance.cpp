class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<32;i++)
        {
            int cntz=0;
            int cntone=0;
            for(auto j:nums)
            {
                if(j&(1<<i)) cntone++;
                else cntz++;
            }
        ans+=cntz*cntone;
        }
        return ans;
    }
};