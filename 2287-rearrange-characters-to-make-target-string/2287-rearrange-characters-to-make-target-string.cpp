class Solution {
public:
    int rearrangeCharacters(string s, string target) {
      map<char,int>mp1,mp2;
        for(int i=0;i<s.length();i++)
        {
            mp1[s[i]]++;
        }
        for(int i=0;i<target.length();i++)
        {
            mp2[target[i]]++;
        }
        int ans=INT_MAX;;
          for (char ch : target)
          { if(mp2[ch])
            ans = min(ans, mp1[ch] / mp2[ch]);
    }
       if(ans==INT_MAX) return 0;
        return ans;
    
    }
};