class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>mp;
       /* for(auto i:ransomNote)
        {
            mp1[i]++;
        }
        for(auto i:magazine)
        {
           mp2[i]++; 
        }
        int count=0;
        int n=mp1.size();
        for(auto i:mp1)
        {
           if(mp2.find(i.first)!=mp2.end())
           {
               char c=i.first;
               if(mp2[c].second==i.second) count++;
           }
        }
        if(count==n) return true;
        elae return false;*/
for(auto c: magazine)
    mp[c]++;

for(auto c: ransomNote)
{
    if(!mp[c])
        return false;
    
    mp[c]--;
}

return true;
    }
};