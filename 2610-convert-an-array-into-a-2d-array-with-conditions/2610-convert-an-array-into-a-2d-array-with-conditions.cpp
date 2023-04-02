class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int maxx=0;
        for(auto i:mp)
        {
            maxx=max(maxx,i.second);
        }
        vector<vector<int>>ans;
        while(maxx--){
             vector<int>v;
        for(auto &i:mp)
        {
          
            if(i.second-->0)
                   v.push_back(i.first);
                
        }ans.push_back(v);
        }
        
        return ans;
    }
};