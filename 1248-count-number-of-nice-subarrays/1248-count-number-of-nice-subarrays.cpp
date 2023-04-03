class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
     int n=nums.size();
      /* vector<vector<int>>s;
        for(int i=0;i<nums.size();i++)
        {
            vector<int>v;
            int cnt=0;
            for(int j=i;j<n;j++)
            {
                v.push_back(nums[j]);
                if(nums[j]%2!=0)cnt++;
                if(cnt==k) {
                s.push_back(v);
                cnt=0;}
            }
        }
        return s.size();*/
        int odd=0;
        int cnt=0;
        int j=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2!=0){
                odd++;
       if(odd>=k)
            {
           cnt=1;
                while(nums[j++]%2==0)
                {
                    cnt++; //j++;
                }
           ans+=cnt;
            }
                            }
            else if(odd>=k)
            {
                ans+=cnt;
            }
        }
        return ans;
    }
};