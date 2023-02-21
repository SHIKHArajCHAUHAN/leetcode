class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>&ans,vector<vector<int>>& image,int delRow[],int delCol[],int iniColor,int color){
        ans[row][col]=color;
        int m=image.size();
        int n=image[0].size();
        for(int i=0;i<4;i++){
            int nrow=row + delRow[i];
            int ncol=col + delCol[i];
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && ans[nrow][ncol]!=color && image[nrow][ncol]==iniColor){
                dfs(nrow,ncol,ans,image,delRow,delCol,iniColor,color);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
      vector<vector<int>>v=image;
          int iniColor=image[sr][sc];
        int delRow[]={-1,0,+1,0};
        int delCol[]={0,+1,0,-1};
        dfs(sr,sc,v,image,delRow,delCol, iniColor,color);
        return v;
    }
};