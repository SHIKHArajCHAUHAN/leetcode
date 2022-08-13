class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp1;
      /*  unordered_map<char,int>mp2;
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            mp1[s[i]]++;
        }
        for( int j=0;j<t.length();j++)
        {
            mp2[t[j]]++;
        }
        for(char c='a';c<='z';c++)
        {
            if(mp1[c]==mp2[c]) return count;
            if(mp1[c]>mp2[c])  count+=mp1[c]-mp2[c];
        }
        
    return count;*/
        int count=0;
        for(auto i:s)
        {
            mp1[i]++;
        }
        for(int i=0;i<t.size();i++)
        {
            if(mp1.find(t[i])!=mp1.end() &&mp1[t[i]]>0)
                mp1[t[i]]--;
          else  count++;
        }
        return count;
    }
};