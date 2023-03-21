class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
           if (mat.size() == 0){
            return mat;
        }
        for (int maxx = 0; maxx < max(mat.size(),mat[0].size()); maxx++){
            for (int i = 0; i < mat.size()-1; i++){
                for (int j = 0; j < mat[0].size()-1; j++){
                    if (mat[i][j] > mat[i+1][j+1]){
                        int temp = mat[i][j];
                        mat[i][j] = mat[i+1][j+1];
                        mat[i+1][j+1] = temp;
                    }
                }
            }
        }
        return mat;
    }
};