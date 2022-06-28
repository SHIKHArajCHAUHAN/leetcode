class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
     vector<vector<int>>v;
       vector<int>store; 
        if(mat.size()*mat[0].size()!=r*c)
            return mat;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++ )
            {
                store.push_back(mat[i][j]);
            }
        }
        int k=0;
        for(int i=0;i<r;i++)
        {
          vector<int>cur;
            for(int j=0;j<c;j++)
                cur.push_back(store[k++]);
             v.push_back(cur);
        }
        
       return v; 
    }
};