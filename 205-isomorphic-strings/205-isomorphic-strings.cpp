class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n1=s.length();
        int n2=t.length();
        if(n1!=n2) return false;
        map<char,char>mp1,mp2;
        for(int i=0;i<s.length();i++)
        {
            mp1[s[i]]=t[i];
            mp2[t[i]]=s[i];
        }

       /* for(auto i:s)
        {
            mp1[i]++;
        }
         for(auto i:t)
        {
            mp2[i]++;
        }*/
        for(int i=0;i<n1;i++)
        {
            if(mp1[s[i]]!=t[i]||mp2[t[i]]!=s[i])return false;
        }
        return true;
        
    }
};