class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)return s;
        vector<string>ans(numRows);
        int dir = 0, row = 0; // 0 - down
        for(auto x:s)
        {
            ans[row].push_back(x);
            // cout << row << " ";
            if(dir==0) row++;
            if(dir==1) row--;
            if(row==numRows-1) dir = 1;
            if(row==0) dir = 0;
        }
        string res;
        for(auto x:ans) res+=x;
        return res;
    }
};