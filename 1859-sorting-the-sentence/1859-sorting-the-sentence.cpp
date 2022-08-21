class Solution {
public:
    string sortSentence(string s) {
        map<int,string>mp;
        string res;
        string str;
        for(int i=0;i<s.length();i++)
        {
           if(isdigit(s[i]))
           {
               mp[s[i]-'0']=str;
               i++;
               str.erase();
           }
            else str+=s[i];
        }
        for(auto i:mp) res+=i.second + ' ';
        res.pop_back();
        return res;
    }
};