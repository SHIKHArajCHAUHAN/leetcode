class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int sum=0;
      for(int i=0;i<grid.size();i++)
          sort(grid[i].begin(),grid[i].end());
        int n=grid[0].size();
        int i=0;
       for(int i=grid[0].size()-1;i>=0;i--){
           int maxx= INT_MIN;
           for(int j=grid.size()-1;j>=0;j--)
           {
              maxx=max(grid[j][i],maxx); 
           }
           sum+=maxx;
        }
        return sum;
    }
};