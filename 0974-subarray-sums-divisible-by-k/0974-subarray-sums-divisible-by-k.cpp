class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
      map<int,int>mp;
        mp[0]=1;
        int ans=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int r=sum%k;
            if(r<0) r+=k;
            ans+=mp[r];
            mp[r]++;
        }   
        return ans;  
    }
};