class Solution {
public:
    int numTeams(vector<int>& rating) {
       int ans=0;
        int n=rating .size();
        for(int i=0;i<n;i++)
        {
            int ll=0,ls=0,rl=0,rs=0;
            for(int j=0;j<i;j++)
            {
                if(rating[i]<rating[j])
                {
                    ll++;
                }
                else ls++;
            }
             for(int j=i+1;j<n;j++)
            {
                if(rating[i]<rating[j])
                {
                    rl++;
                }
                else rs++;
            }
            ans+=ll*rs+ls*rl;
        }
        return ans;
    }
};