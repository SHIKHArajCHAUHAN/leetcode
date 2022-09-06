class Solution {
public:
   static bool comp(const vector<int>&v1,const vector<int>&v2)
    {
        if(v1[0]!=v2[0]) return v2[0]>v1[0];
        return v1[1]<v2[1];
    }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
       vector<vector<int>>v;
        for(int i=0;i<intervals.size();i++)
        {
            v.push_back(intervals[i]);
        }
        // for(int i=0;i<newIntervals.size();i++){
        v.push_back(newInterval);
        sort(v.begin(),v.end(),comp);
        stack<pair<int,int>>S;
        for(auto x:v)
        {
           if(!S.empty() && S.top().second >= x[0])
            {
                int start = min(S.top().first, x[0]), end = max(S.top().second, x[1]);
                S.pop();
                S.push({start, end});
            }
            else S.push({x[0], x[1]}); 
        }
        intervals.clear();
        while(!S.empty())
        {
            intervals.push_back({S.top().first,S.top().second});
            S.pop();
        }
        reverse(intervals.begin(),intervals.end());
        return intervals;
        
    
    }
};