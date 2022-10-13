class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       int n=nums.size();
        int j=0,i=0;
        int cnt=0;
        int prod=1;
        while(j<n)
        {
            prod*=nums[j];
           /* if(prod<k)
            {
                j++;
            }*/j++;
                while(i<n&&prod>=k)
                {
                    prod/=nums[i];
                    i++;
                    
                }
       // j++; 
            cnt+=j-i;
        }
        if(cnt<0) return 0;
        return cnt;
    }
};