class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>>ans(n,vector<int>(n,0));
        int temp=1;
        int left =0;
        int right=n-1;
        int bottom=n-1;
        int top=0;
        int dir=0;
        while(left<=right&&top<=bottom)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    ans[top][i]=temp;
                    temp++;
                }
                top++;
            }
            if(dir==1)
            {
                for(int i=top;i<=bottom;i++)
                {
                    ans[i][right]=temp;
                    temp++;
                }
                right--;
            }
            if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    ans[bottom][i]=temp;
                    temp++;
                }
                bottom--;
            }
            if(dir==3)
            {
                for(int i=bottom;i>=top;i--)
                {
                    ans[i][left]=temp;
                    temp++;
                }
                left++;
            }dir=(dir+1)%4;
        }
        return ans;
    }
};