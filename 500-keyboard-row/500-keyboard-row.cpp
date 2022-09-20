class Solution {
public:

       unordered_map<char, int> mp;
    
    bool check(string s,char c)
    {
        int row = mp[c];
        
        for(int i = 0 ; i < s.size(); i++)
        {
            char ch = tolower(s[i]);
            if(mp[ch] != row) return false;
        }
        return true;
    }
    vector<string> findWords(vector<string>& words) {
        string s1 = "qwertyuiop";
        string s2 = "asdfghjkl";
        string s3 = "zxcvbnm";
        for(char i : s1)
        {
            mp[i] = 1;
        }
        for(char i : s2)
        {
            mp[i] = 2;
        }
        for(char i : s3)
        {
            mp[i] = 3;
        }
        
        vector<string> v;
        for(int i = 0; i < words.size(); i++)
        {
            string s = words[i];
            char ch = tolower(s[0]);
            if(check(s, ch))
            {
                v.push_back(s);
            }
        }
        
        return v;
    
    }
};