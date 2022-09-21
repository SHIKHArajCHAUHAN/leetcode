class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n=s.length();
      vector<int>v(n,1);
        for(int i=1;i<n;i++)
        {
            if(s[i]-s[i-1]==1)
                v[i]=v[i-1]+1;
        }
        return *max_element(v.begin(),v.end());
    }
};