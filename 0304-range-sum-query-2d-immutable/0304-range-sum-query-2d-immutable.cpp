class NumMatrix {
public:
     vector<vector<int>> prefix;
    NumMatrix(vector<vector<int>>& matrix) {
int R=matrix.size();
        prefix=matrix;
        int C=matrix[0].size();
       /* for(int i = 0; i < R; i++){
            for(int j = 0; j < C; j++){
                if(j==0)prefix[i][j]=matrix[i][0];
                else
             prefix[i][j] = prefix[i][j-1] + matrix[i][j];
            }
        } */
    
        for(int i=1; i<R; i++){
           prefix[i][0] = prefix[i-1][0] + matrix[i][0]; 
        }
        for(int j=1; j<C; j++){
            prefix[0][j] = prefix[0][j-1] + matrix[0][j]; 
        }
        for(int i=1; i < R; i++){
            for(int j=1; j < C; j++){
                prefix[i][j] = matrix[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
            }
         }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
         
        if(row1 == 0 && col1 == 0){
            return prefix[row2][col2];
        }
        else if(row1 == 0){
            return prefix[row2][col2] - prefix[row2][col1-1];
        }
        else if(col1 == 0){
              return prefix[row2][col2] - prefix[row1-1][col2];          
        }
        else
          return prefix[row2][col2] - prefix[row2][col1-1] - prefix[row1-1][col2] + prefix[row1-1][col1-1]; 
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */