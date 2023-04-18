class Solution {
public:
    int fn(vector<int>&alpha)
    {
        int minn=INT_MAX;
        int maxx=-1;
        for(int i=0;i<alpha.size();i++)
        {
            maxx=max(maxx,alpha[i]);
            if(alpha[i]>=1)
            {
                minn=min(minn,alpha[i]);
            }
        }
        return maxx-minn;
    }
    int beautySum(string s) {
       int res=0;
        for(int i=0;i<s.size();i++)
        {
            vector<int>alpha(26,0);
            for(int j=i;j<s.size();j++)
            {
                alpha[s[j]-'a']++;
                res+=fn(alpha);
            }
        }
        return res;
    }
};