class Solution {
public:
    bool canConstruct(string s, int k) {
      int n=s.size();
        if(n<k) return false;
        map<char, int> mp;
        for(auto i:s) mp[i]++;
        int cnt=0;
        for(auto i: mp)
        {
            if(i.second%2!=0) cnt++;
        }
        if(cnt>k) return false;
        return true;
    }
};