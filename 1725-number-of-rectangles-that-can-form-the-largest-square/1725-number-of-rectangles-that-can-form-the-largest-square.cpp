class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int n=rectangles.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            int minn=min(rectangles[i][0],rectangles[i][1]);
            v.push_back(minn);
        }
        int maxx=INT_MIN;
        for(int i=0;i<v.size();i++){
            maxx=max(maxx,v[i]);
        }
        int count=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==maxx){
                count++;
            }
        }
        return count; 
    }
};