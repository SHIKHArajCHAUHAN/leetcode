class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
      /*  sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>  ans;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
              //  ans.insert(nums[i]);
            ans.push_back(nums[i]);
            ans.push_back(nums[i]+1);}
            }
        return ans;*/
           vector<int> res = {0, 0};
        map<int, int>mp;
        long sum = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(nums[i]) == mp.end()){
                mp[nums[i]] = 1;
                sum += nums[i];
            }
            else{
                mp[nums[i]]++;
                res[0] = nums[i];
            }
        }
        
        res[1] = nums.size()*(nums.size()+1)/2 - sum;
        
        return res;
        }
};