class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
     //    int n=mat.size();
     //    int m=mat[0].size();
     // vector<int>rowln(m*n+1),colln(m*n+1);
     //    for(int i=0;i<n;i++)
     //    {
     //        for(int j=0;j<m;j++)
     //        {
     //            rowln[mat[i][j]]=i;
     //            colln[mat[i][j]]=j;
     //        }
     //    }
     //   vector<int>row(n),col(m);
     //    for(int i=0;i<n*m;i++)
     //    {
     //        row[rowln[arr[i]]]++;
     //        col[colln[arr[i]]]++;
     //        if(row[rowln[arr[i]]]==n) return i;
     //        if(col[colln[arr[i]]]==m) return i;
     //    }
     //    return n*m;
         unordered_map<int, pair<int, int>> mp;
        int n = mat.size(), m = mat[0].size();
        vector<int> row(n), col(m);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                mp[mat[i][j]] = {i, j};
            }
        }
        for(int i = 0, sz = arr.size(); i < sz; i++){
            auto [f, s] = mp[arr[i]];
            row[f]++;
            col[s]++;
            if(row[f] == m or col[s] == n) return i;
        }
        return -1;
    }
};