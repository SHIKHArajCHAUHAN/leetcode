class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        map<char,int>mp;
        for(int i=0;i<words[0].size();i++)
        {
            mp[words[0][i]]++;
        }
        map<char,int>mp2;
        for(auto a:words)
        {
            mp2.clear();
            for(auto b:a)
            {
                mp2[b]++;
            }
             for (auto &x : mp)
            {

                x.second = min(x.second, mp2[x.first]);
            }
        }
        vector<string>v;
        string s;
        for(auto i:mp)
        {
            while(i.second)
            {
                s=i.first;
                v.push_back(s);
                i.second--;
            }
        }
        return v;
    }
};