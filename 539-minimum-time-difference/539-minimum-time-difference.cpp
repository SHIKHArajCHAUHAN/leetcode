class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> v;
        for(int i = 0; i < timePoints.size(); i++)
        {
            int hour = stoi(timePoints[i].substr(0, 2));
            int minute = stoi(timePoints[i].substr(3, 5));
            int ans=hour*60 + minute;
            v.push_back(ans);
        }
        sort(v.begin(), v.end());
        int minn = INT_MAX;
        
        for (int i = 1; i < v.size(); ++ i){
            minn= min(minn, v[i] - v[i - 1]);
        }
        minn = min(minn, v.front() + 1440 - v.back());/// special case 23:59 and 00:00
        
        return minn;
    }
};