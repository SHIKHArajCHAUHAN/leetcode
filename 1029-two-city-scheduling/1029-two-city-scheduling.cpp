class Solution {
public:
   static bool compr(vector<int>&v1,vector<int>&v2)
    {
        if((v1[0]-v1[1])<(v2[0]-v2[1]))
           return true;
           else return false;
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),compr);
       int n=costs.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(i<n/2)
            {
                ans+=costs[i][0];
            }
            else ans+=costs[i][1];
        }
        return ans;
    }
};