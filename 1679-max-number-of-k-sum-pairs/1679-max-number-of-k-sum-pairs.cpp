class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
       map<int,int>mp;
        int ans=0;
        for(auto it:nums){
            if(mp[k-it]>0){
                ans++;
                mp[k-it]--;
            }
            else{
                mp[it]++;
            }
        }
        return ans;
        // for(int i=0;i<nums.size();i++)
        // {
        //     mp[nums[i]]++;
        // }
        // int cnt=0;
        // for(auto i:nums)
        // {
        //     if(mp.count(k-i))
        //     {
        //         if(k-i==i)
        //         {
        //             if(mp[k-i]==1)continue;
        //             else 
        //             {
        //                 mp[k-i]-=2;
        //                 cnt++;
        //             }
        //         }
        //        else{  cnt++;
        //         mp[k-i]--;
        //         mp[i]--;
        //         if(mp[k-i]==0)mp.erase(k-i);
        //         if(mp[i]==0)mp.erase(i);
        //            }
        //     }
        // }
        // return cnt;
    }
};