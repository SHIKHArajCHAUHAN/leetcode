class Solution {
public:
    int minSteps(string s, string t) {
        int count=0;
        map<char,int>mp1,mp2;
        for(auto i:s)
        {
            mp1[i]++;
        }
        for(auto i:t)
        {
            mp1[i]--;
        }
        for(auto i:mp1)
        {
           count+=abs(i.second); 
        }
        return count;
    }
};