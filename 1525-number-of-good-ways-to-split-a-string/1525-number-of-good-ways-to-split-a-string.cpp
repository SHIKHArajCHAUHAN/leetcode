class Solution {
public:
    int numSplits(string s) {
       map<int,int>mp1,mp2;
        for(auto i:s)
        {
            mp1[i]++;
        }
        int cnt=0;
        for(auto i:s)
        {
            mp2[i]++;
            if(--mp1[i]==0) mp1.erase(i);
            if(mp1.size()==mp2.size()) cnt++;
        }
        return cnt;
    }
};