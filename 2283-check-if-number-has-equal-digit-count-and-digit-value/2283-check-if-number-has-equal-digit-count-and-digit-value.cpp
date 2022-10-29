class Solution {
public:
    bool digitCount(string num) {
      map<char,int>mp;
        for(int i=0;i<num.size();i++)
        {
            int x=num[i]-'0';
            mp[x]++;
        }
        for(int i=0;i<num.size();i++)
        {
           if(num[i]-'0'!=mp[i]) return false; 
        }
        return true;
    }
};