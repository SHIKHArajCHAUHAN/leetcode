class Solution {
public:
    static bool fn(const vector<int>&v1,const vector<int>&v2)
    {
        if(v1[0]!=v2[0]) return v2[0]>v1[0];
        return v2[1]>v1[1];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       stack<pair<int,int>>s;
      /*  for(auto i:intervals)
        {
            s.push({i.first,i.second});
        }*/
       // intervals.clear();
        sort(intervals.begin(),intervals.end(),fn);
        for(auto i:intervals)
        {
            if(!s.empty() &&s.top().second>=i[0])
            {
                int minn=min(s.top().first,i[0]);
                int maxx=max(s.top().second,i[1]);
                s.pop();
                s.push({minn,maxx});
            }
            else s.push({i[0],i[1]});
        }
        intervals.clear();
        while(!s.empty())
        {
           intervals.push_back({s.top().first,s.top().second});
            s.pop();
        }
        reverse(intervals.begin(),intervals.end());
        return intervals;
    }
};