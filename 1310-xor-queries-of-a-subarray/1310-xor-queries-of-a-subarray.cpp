class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>p,ans;
        p.push_back(arr[0]);
        for(int i=1;i<arr.size();i++)
        {
            p.push_back(p[i-1]^arr[i]);
        }
        for(int i=0;i<queries.size();i++)
        {
            int l=queries[i][0];
            int r=queries[i][1];
              if(l==0)
        {
            ans.push_back(p[r]);
        }
        else

        {
            ans.push_back(p[r]^p[l-1]);
        }
            
        }
        return ans;
    }
};