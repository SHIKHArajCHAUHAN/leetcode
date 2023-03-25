class Solution {
public:
    int edgeScore(vector<int>& edges) {
      map<int,long long>mp;
        for(int i=0;i<edges.size();i++)
        {
            mp[edges[i]]+=i;
        }
        int maxx=0;
        int ans=0;
        
        for(auto i:mp)
        {
            if(i.second>maxx)
            {
                maxx=i.second;
     ans=i.first;
            }
        }
        return ans;
    }
};