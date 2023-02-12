class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
       /* uordered_map<int,int>mp;
        for(long long i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int x=upper-lower;
        long long cnt=0;
        for(long long i=0;i<=x;i++)
        {
            int y=lower+i;
        for(long long j=0;j<nums.size();j++){
            
                if(mp.find(y-nums[j])!=mp.end())
                    cnt+=mp[y-nums[j]];
        }
        }
        return cnt;*/
        int n=nums.size();
        long long cnt=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            int x=lower-nums[i],y=upper-nums[i];
            auto a=lower_bound(nums.begin()+i+1,nums.end(),x);
            auto b=upper_bound(nums.begin()+i+1,nums.end(),y);
            cnt+=b-a;
        }
        return cnt; 
    }
};