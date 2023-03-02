class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
       int ans=-1;
        map<char,int>mp;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
          mp[s[i]]=i;
        }
        if(mp.size()==n)return -1;
       // reverse(s.begin(),s.end());
        for(int i=0;i<n;i++)
        {
            if((mp.find(s[i])!=mp.end()))
                ans=max(ans,mp[s[i]]-i-1);
        } 
        return ans;
    }
};