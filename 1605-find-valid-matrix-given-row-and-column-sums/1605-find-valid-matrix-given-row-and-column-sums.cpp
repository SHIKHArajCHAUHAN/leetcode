class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
       int n1=rowSum.size();
        int n2=colSum.size();
        vector<vector<int>>ans(n1,vector<int>(n2,0));
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2&rowSum[i]>0;j++)
            {
                int x=min(rowSum[i],colSum[j]);
                colSum[j]-=x;
                rowSum[i]-=x;
                ans[i][j]=x;
            }
        }
        return ans;
    }
};