class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n=groupSizes.size();
        vector<vector<int>>v, groups(n+1);
        for(int i = 0; i <n; i++)
        {
            groups[groupSizes[i]].push_back(i);
            if(groups[groupSizes[i]].size() ==groupSizes[i])
            {
            v.push_back(groups[groupSizes[i]]);
                groups[groupSizes[i]].clear();
            }
        }
        return v;  
    }
};