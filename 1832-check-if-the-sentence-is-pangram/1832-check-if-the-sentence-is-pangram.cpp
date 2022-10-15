class Solution {
public:
    bool checkIfPangram(string sentence) {
       map<char,int>mp;
        for(int i=0;i<sentence.length();i++)
        {
            mp[sentence[i]]++;
        }
        for(char ch='a';ch<='z';ch++)
        {
            if(mp.find(ch)==mp.end()) return false;
        }
        return true;
    }
};