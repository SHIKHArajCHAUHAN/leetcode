class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0,j=0,count=0;
        map<char,int>mp;
            while(j<s.length())
            {
                mp[s[j]]++;
               while(mp.size()==3)
               {
                       count +=s.length()-j;
                   mp[s[i]]--;
                   if(mp[s[i]]==0) mp.erase(s[i]);
                   i++;
               }
                j++;
            }
        return count;
                
    }
};