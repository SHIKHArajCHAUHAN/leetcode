class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     /* map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {mp[nums[i]]++;}
        for(auto i:mp)
        {
            if(i.second>2)
                mp[i.first]--;
        }
        nums.clear();
        int count=0;
        for(auto i:mp)
        {
            mp[nums[]]--;
                if(mp[i]==0) mp.erase();
            count++;
            
        }
        return count;*/
         int n=nums.size(),cnt=0;
        for(int i=0;i<n;i++){
            if(count(nums.begin(),nums.end(),nums[i])>2){
                nums[i]=INT_MAX;
                cnt++;
            }
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<cnt;i++){
            nums.pop_back();
        }
        return nums.size();
    }
};