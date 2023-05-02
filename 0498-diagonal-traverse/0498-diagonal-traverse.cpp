class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
     //even sum of row col ==up arraow
       int m=mat.size(); //last itr (n-1)*(n-1) first one is 0....so from 0 to last
               int r=0,c=0;
        int n=mat[0].size();
        vector<int>ans;
        bool up=true;
        while(r<m and c<n)
        {
            if(up)
            {
                while(r>0 and c<n-1)
                {
                    ans.push_back(mat[r][c]);
                    r--; c++;
                } 
                ans.push_back(mat[r][c]);
                if(c==n-1) r++;
               else c++;


            }

            else
            {
                while(c>0 and r<m-1)
                {
                    ans.push_back(mat[r][c]);
                    r++; c--;
                }
                ans.push_back(mat[r][c]);
                if(r==m-1) c++;
                else r++;

            }
            up=!up;
        }
        return ans;

        
    }
};