class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
     map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                mp[nums[i]]++;
            }
        }
        nums.clear();
        int n_mp=mp.size();
        int maxx=0;
        int ans=-1;
                    if(n_mp!=0)
            {
               for(auto i:mp)
               {
                   if(i.second>maxx)
                   {
                       maxx=i.second;
                       ans=i.first;
                   }
               }
            }
        return ans;
    
    }
};