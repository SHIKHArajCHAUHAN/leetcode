class Solution {
public:
    int partitionString(string s) {
       map<int,int>mp;
        int cnt=0;
        for(int i=0;i<s.length();i++)
        {
          if(mp.find(s[i])==mp.end())
          {
              mp[s[i]]++;
          }
            else
            {
                cnt++;
                mp.clear();
                mp[s[i]]++;
            }
        }
        if(mp.size()!=0) return cnt+1;
        else return cnt;
    }
};