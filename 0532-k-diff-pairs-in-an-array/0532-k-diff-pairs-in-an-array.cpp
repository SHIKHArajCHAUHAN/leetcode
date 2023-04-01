class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
//       int cnt=0;
//         map<int,int>mp;
//         for(int i=0;i<nums.size();i++)
//         {
//             mp[nums[i]]=i;
//         }
//         for(int i=0;i<nums.size();i++)
//         {
//             int x=k+nums[i];
//             if(mp.find(x)!=mp.end()&&i!=mp[x])
//             { 
    
//                cnt++;
//             }
//             // if(mp[nums[i]]==0)mp.erase(nums[i]);
            
//         }
//         return cnt;
    map<int,int> mp;
        for(auto i:nums)
        { mp[i]++;
        }
        int ans=0;
        for(auto i:mp){
            if(k==0 ){
                if(i.second>1)ans++;
            }
            else if(mp.find(i.first+k)!=mp.end())ans++;
        }
        return ans;
    }
};