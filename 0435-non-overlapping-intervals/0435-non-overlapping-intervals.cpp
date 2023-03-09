class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
       int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        int cnt=0;
        int minn=INT_MIN;
        for(int i=0;i<n;i++)
        {
           if( intervals[i][0]<minn)
           { cnt++;
            minn=min(intervals[i][1],minn);
           }
        else minn=intervals[i][1];
        }
        return cnt;
         
    }
};