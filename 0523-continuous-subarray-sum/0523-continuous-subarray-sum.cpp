class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       /* int n = nums.size();
        for (int i = 0; i < n; i++) {
            int sum = nums[i];
            for (int j = i + 1; j < n; j++) {
                sum += nums[j];
                if (sum == k) return true;
                if (k != 0 && sum % k == 0) return true;
            }
        }
        return false; */
int sum=0;
        map<int,int> mp;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int x=sum%k;
            if(mp.find(x)!=mp.end())
            {
                if(i-mp[x]>1)
                    return 1;
            }
            else
                mp[x]=i;
            
        }
        
        return 0;
    }
};