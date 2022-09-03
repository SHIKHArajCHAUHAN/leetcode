class Solution {
public:
    bool areOccurrencesEqual(string s) {
      map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        int n=mp.size();
        int count=0;
        int val = mp[int(s[0])];
        for(auto i:mp)
        {
            if(i.second!=val) return false;
        }
        return true;
    }
};