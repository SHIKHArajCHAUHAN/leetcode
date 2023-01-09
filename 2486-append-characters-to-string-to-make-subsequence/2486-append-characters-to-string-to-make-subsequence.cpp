class Solution {
public:
    int appendCharacters(string s, string t) {
      /* int n=s.size();
        int m=t.size();
        int j=0;
        for(int i=0;i<m;i++)
        {
        while(j<n&&s[j]!=t[i])
        {
            j++;
            if(j++==n) return m-i;
        }
        }
        return 0;*/
         int m = s.size(), n = t.size();
        for (int i = 0, j = 0; j < n; ++j) {
            while (i < m && s[i] != t[j]) {
                ++i;
            }
            if (i++ == m) {
                return n - j;
            }
        }
        return 0;
    }
};