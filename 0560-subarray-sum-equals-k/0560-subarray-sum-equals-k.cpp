class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int sum=0;
        int rem=0;
        int ans=0;
        map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
       
            if(mp.find(sum-k)!=mp.end()){
                ans+=mp[sum-k];
            }
            if(mp[sum]){
                mp[sum]++;
            }else mp[sum]=1;
        }
        return ans  ;
    }
};