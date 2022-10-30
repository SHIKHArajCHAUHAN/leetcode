class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int>mp1,mp2;
        set<string>s;
     for(int i=0;i<words1.size();i++)
     {
        mp1[words1[i]]++; 
         s.insert(words1[i]);
     }
        for(int i=0;i<words2.size();i++)
     {
        mp2[words2[i]]++; s.insert(words2[i]);
     }
      int count=0;
        int len=min(words1.size(),words2.size());
        for(auto i:s)
        {
            if(mp1[i]==1&&mp2[i]==1) count++;
        }
        return count;
    }
};