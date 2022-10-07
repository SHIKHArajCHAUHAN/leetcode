class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       map<int,int>mp;
        for(auto i:nums)
        {
            if(i>0)
            mp[i]++;
        }
        int i=1;
        while(1)
        {
            if(mp.find(i)==mp.end()) return i;
            i++;
        }
        return -1;
    }
};