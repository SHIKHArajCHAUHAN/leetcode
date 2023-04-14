class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
     map<int,long long>mp;
        vector<vector<long long>>v;
        int n=segments.size();
        for(auto i:segments)
        {
            mp[i[0]]+=i[2];
            mp[i[1]]-=i[2];
        }
        int cur=0;
        for(auto &i:mp)
        {
            if(mp[cur]>0) v.push_back({cur,i.first,mp[cur]});
             mp[i.first]+=mp[cur]; 
            cur=i.first;
        }
        return v;
    }
};