class Solution {
public:
    static bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second==b.second ? a.first>b.first : a.second<b.second;
}
    vector<int> frequencySort(vector<int>& nums) {
      map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
         vector<int> ans;
        vector<pair<int,int>> v;

        for(auto x : nums) v.push_back({x, mp[x]});

        sort(v.begin(), v.end(), cmp);

        for(auto x : v)ans.push_back(x.first);

        return ans;
        
    }
};