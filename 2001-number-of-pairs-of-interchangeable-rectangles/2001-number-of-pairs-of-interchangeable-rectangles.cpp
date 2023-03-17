class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        map<double,long long>mp;
        for(auto i:rectangles)
        {
            mp[(double)i[0]/((double)i[1])]++;
        }
    long long cnt=0;
        for(auto i:mp)
        {
            if(i.second>=2)
            {
                cnt+=((i.second)*(i.second-1))/2;
            }
        }
        return cnt;
    }
};