class Solution {
public:

    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int,int>>v;
        for(int i=0;i<plantTime.size();i++)
        {
            v.push_back({growTime[i],plantTime[i]});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        int start=0;int ans=0;
        for(int i=0;i<plantTime.size();i++)
        {
            start+=v[i].second;
            ans=max(ans,start+v[i].first);
        }
        return ans;
    }
};