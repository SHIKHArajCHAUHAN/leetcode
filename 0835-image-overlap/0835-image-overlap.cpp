class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
      vector<pair<int,int>>v1,v2;
        for(int i=0;i<img1.size();i++)
        {
            for(int j=0;j<img1.size();j++)
            {
                if(img1[i][j]==1) v1.push_back({i,j});
                if(img2[i][j]==1) v2.push_back({i,j});
            }
        }
         int res=0;
        map<pair<int, int >, int> mp;
        for(auto i : v1){
            for(auto j : v2){
        
                int x = j.first - i.first;
                int y = j.second - i.second;
                mp[{x, y}]++;
                
            res= max(res, mp[{x, y}]);
            }
        }
        return res;
    }
};