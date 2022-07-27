class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
     priority_queue<int>pq;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            { pq.push(matrix[i][j]);
            if(k<pq.size())
                pq.pop();
             }
        }
        return pq.top();
    }
};