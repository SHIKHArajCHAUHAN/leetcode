class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt=0;
        for(int i=0;i<words.size();i++)
        {
            int n=words[i].size();
            if(s.substr(0,n)==words[i])cnt++;
        }
        return cnt;
    }
};