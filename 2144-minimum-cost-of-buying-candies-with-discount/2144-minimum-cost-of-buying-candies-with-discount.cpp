class Solution {
public:
    int minimumCost(vector<int>& cost) {
      sort(cost.begin(),cost.end());
        int ans=0;
        int n=cost.size();
        for(int i=n-1;i>=0;i--){
            int j=i;
            while(j!=i+2&&i>=0)
            {
                ans+=cost[i];
                i--;
            }
           
        }
        return ans;
    }
};