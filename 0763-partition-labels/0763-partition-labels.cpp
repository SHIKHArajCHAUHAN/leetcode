class Solution {
public:
    vector<int> partitionLabels(string s) {
      map<int,int>mp;
        int cnt=0;
        vector<int>v;
        int end=-1;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]=i;
        }
        for(int i=0;i<s.length();i++)
        {
            cnt++;
            if(mp[s[i]]>end)
            {
                end=mp[s[i]];
            }
            if(i==end)
            {v.push_back(cnt);
             cnt=0;}
        }
        return v;
    }
};