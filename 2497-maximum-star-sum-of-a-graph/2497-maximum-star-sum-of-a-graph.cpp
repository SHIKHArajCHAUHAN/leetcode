class Solution {
public:
    int maxStarSum(vector<int>& vals, vector<vector<int>>& edges, int k) {
        map<int,vector<int>>mp;
        if(edges.size()==0) return *max_element(vals.begin(),vals.end());
        for(int i=0;i<edges.size();i++)
        {
            mp[edges[i][0]].push_back(vals[edges[i][1]]);
              mp[edges[i][1]].push_back(vals[edges[i][0]]);
    
        }
        int maxx=INT_MIN;
        for(int i=0;i<vals.size();i++)
        {
            int sum=vals[i], size = mp[i].size();
            sort(mp[i].begin(),mp[i].end(),greater<int>());
            for(int j=0; j<(min(k, size)); j++)
            {
                if(mp[i][j]>0)sum+=mp[i][j];
                else break;
            }
            maxx=max(maxx,sum);
        }
        return maxx;
    }
};