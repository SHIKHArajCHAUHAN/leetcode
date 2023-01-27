class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
       int n=matrix.size();
       /* int target=(n*(n+1))/2;
        for(int i=0;i<matrix.size();i++)
        {
            int sum=0;
            int sum1=0;
            for(int j=0;j<matrix.size();j++)
            {
                sum+=matrix[i][j];
                sum1+=matrix[j][i];
            }
            if(sum!=target||sum1!=target) 
            {
                return false;
                break;}
        }
        return true;*/
        for(int i = 0; i < n; i++){
            set<int> rows, cols;
            for(int j = 0; j < n; j++) {
                rows.insert(matrix[i][j]);
                cols.insert(matrix[j][i]);
            }
            if(rows.size() != n or cols.size() != n) return false;
        }
        
        return true;
    }
};