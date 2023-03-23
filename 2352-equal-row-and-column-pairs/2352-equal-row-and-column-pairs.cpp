class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int cnt=0;
       for(int i=0;i<grid.size();i++)
       {
           for(int k=0; k<grid.size();k++)
           {
            vector<int>v;
               for(int j=0;j<grid.size();j++)
               {
                   v.push_back(grid[j][k]);
               }
                if(grid[i]==v)cnt++;
           }
       }return cnt;
    }
};