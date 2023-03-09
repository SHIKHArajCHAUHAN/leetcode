class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==1) return 1;
        sort(points.begin(),points.end());
        int n=points.size();
        int minn=points[0][1];
        int cnt=1;
        for(int i=1;i<n;i++)
        {
           if(points[i][0]>minn)
           {
               cnt++;
               minn=points[i][1];
           }
            else minn=min(minn,points[i][1]);
        }
        return cnt;
    }
};