class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int i=0,j=0;
        string str="";
         int n=s.length();
        unordered_map<string,int>mp;
        vector<string>v;
        while(j-i+1<=10)
        {
            str+=s[j];
            j++;
        }
        mp[str]++;
        
        while(j<n)
        {
          str.push_back(s[j]);
            str.erase(0,1);i++;
            mp[str]++;
            j++;
        }
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->second>1) v.push_back(i->first);
        }
        return v;
    }
};