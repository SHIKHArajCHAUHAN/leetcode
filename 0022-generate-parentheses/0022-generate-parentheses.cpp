class Solution {
public:
    vector<string> generateParenthesis(int n) {
     vector<string>res;
         findall("(",1,0,res,n);
        return res;
    }
    void findall(string cur,int o,int c,vector<string>&res,int n)
    {
        if(cur.length()==2*n)
        {
            res.push_back(cur);
            return ;
        }
        if(o<n)findall(cur+"(",o+1,c,res,n);
        if(c<o)findall(cur+")",o,c+1,res,n);
    }
};