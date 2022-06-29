class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
    vector<int>v1,v2,ans;
        stack<int>s;
        for(int i=0;i<matrix.size();i++){
            int minn=*min_element(matrix[i].begin(),matrix[i].end());
            v1.push_back(minn);
        }
            for(int j=0;j<matrix[0].size();j++)
            {int maxx=0;
                for(int i=0;i<matrix.size();i++)
                {
             maxx=max(maxx,matrix[i][j]);
                }
                v2.push_back(maxx);
            }
        for(int i=0;i<v1.size();i++)
        {
            for(int j=0;j<v2.size();j++)
            {
                if(v1[i]==v2[j]){
                    ans.push_back(v1[i]);
                break;
                } 
            }
        }
        
        return ans;
    }
};