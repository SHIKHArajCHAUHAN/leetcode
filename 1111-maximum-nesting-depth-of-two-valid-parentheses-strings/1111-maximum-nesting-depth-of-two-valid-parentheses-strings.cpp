class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
       vector<int>v(seq.length());
        int level=0;
        for(int i=0;i<seq.length();i++)
        {
            char s=seq[i];
            if(s=='(')
            {
                v[i]=++level%2;
            }
            else {
                v[i]=level--%2;
            }
        }
        return v;
        
    }
};