class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
       sort(intervals.begin(),intervals.end());
        int cnt=1;             
        int x=intervals[0][0];
        int y=intervals[0][1];
        for(int i=0;i<intervals.size();i++)
        {
            if(intervals[i][0]>x&&intervals[i][1]>y)
            {
                cnt++;
            }
            if(intervals[i][1]>y)
            {
                x=intervals[i][0];  
                y=intervals[i][1];
            }
        }
        return cnt;  
    }
};