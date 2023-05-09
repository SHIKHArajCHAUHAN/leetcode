class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
       vector<vector<int>> ans;
        int r = rStart, c = cStart;
        int step = 1, dir = 1;
        ans.push_back({r,c});
        while (ans.size() < rows*cols) {
            for (int i = 0; i < step; i++) {
                c += dir;
                if (r >= 0 and r < rows and c >= 0 and c < cols)
                    ans.push_back({r,c});
            }
            for (int i = 0; i < step; i++) {
                r += dir;
                if (r >= 0 and r < rows and c >= 0 and c < cols)
                    ans.push_back({r,c});
            }
            dir *= -1;
            step++;
        }
        return ans;  
    }
};