class Solution {
public:
int max_val(vector<vector<int>>&v , int r , int c){
        int val = -1;
        for(int i = r ; i < r + 3;i++){
            for(int j = c ; j< c + 3;j++){
                val = max(val , v[i][j]);
            }
        }
        return val;
    }
    
    
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> ans(n - 2 , vector<int> (n - 2));
        
        for(int i=0;i<n - 2 ; i++){
            for(int j=0;j<n - 2;j++){
                ans[i][j] = max_val(grid , i , j);
            }
        }
        return ans;
    }
};