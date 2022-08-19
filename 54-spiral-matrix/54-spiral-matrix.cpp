class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
    /*    vector<int>ans;
        int dir=0;
        int left=0;
        int right=matrix[0].size()-1;
        int top=0;
        int bottom=matrix.size()-1;
        while(left<=right||top<=bottom)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {  ans.push_back(matrix[top][i]);}
            
            top++;
            }
            if(dir==1)
            {
                for(int i=top;i<=bottom;i++)
                { ans.push_back(matrix[i][right]);}
                right--;
            }
            if(dir==2)
            {
                for(int i=right;i>=left;i--)
                { ans.push_back(matrix[bottom][i]);}
                bottom--;
            }
            if(dir==3)
            {
                for(int i=bottom;i>=top;i--)
                { ans.push_back(matrix[i][left]);}
                left++;
            }
            dir=(dir+1)%4;
        }
            return ans;
        
        */
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        int dir = 0;
        vector<int> ans;
        int top = 0, bottom = matrix.size()-1;
        int left = 0, right = matrix[0].size()-1;
        while(left<=right && top<=bottom)
        {
            if(dir == 0)
            {
                for(int i=left; i<=right; i++)
                    ans.push_back(matrix[top][i]);
                top++;
            }
            if(dir==1)
            {
                for(int i=top; i<=bottom; i++)
                    ans.push_back(matrix[i][right]);
                right--;
            }
            if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(matrix[bottom][i]);
                    
                }
                bottom--;
            }
            if(dir==3)
            {
                for(int i=bottom;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                    
                }
                left++;
            }
            // dir++;
            // if(dir==4) dir = 0;
            dir = (dir+1)%4;
        }
        return ans;
    }
};