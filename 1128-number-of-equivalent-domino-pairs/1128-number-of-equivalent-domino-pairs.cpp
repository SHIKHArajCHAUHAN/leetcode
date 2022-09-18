class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
    
       
        map<pair<int,int>,int> mp;
        int ans=0;
        for(auto &i:dominoes)
        {
            int a=min(i[0],i[1]),b=max(i[0],i[1]);
            mp[{a,b}]++;
        }
        for(auto &i:mp)
        {
            int n=i.second;
            ans+=((n-1)*n)/2;
        }
        return ans;
    }
};