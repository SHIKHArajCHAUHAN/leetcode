class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
      vector<string>v;
        for(int i=0;i<words.size();i++)
        {
            map<char,char>mp1,mp2;
            int flag=1;
            for(int j=0;j<words[i].size();j++)
            {
                auto it=mp1.find(pattern[j]);
                auto it2=mp2.find(words[i][j]);
                 if(it2==mp2.end())
                {
                    mp2.insert({words[i][j],pattern[j],});
                }
                else
                {
                    if(it2->second!=pattern[j])
                    {
                        flag=0;
                        break;
                    }
                }
                if(it==mp1.end())
                {
                    mp1.insert({pattern[j],words[i][j]});
                }
                else
                {
                    if(it->second!=words[i][j])
                    {
                        flag=0;
                        break;
                    }
                }
            }
            if(flag==1)
            {
                v.push_back(words[i]);
            }
        }
        return v;
    }
};