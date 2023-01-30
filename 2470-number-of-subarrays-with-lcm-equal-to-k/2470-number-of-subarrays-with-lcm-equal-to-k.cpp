class Solution {
public:
     long long lcm(long long  a, long long b){
        return (a / gcd(a, b)) * b;
    }
    int subarrayLCM(vector<int>& nums, int k) {
       long long cnt=0;
        long long n=nums.size();
             for(long long i=0; i<n; i++)
         {
            long long curr = nums[i];
             for(long long j=i; j<n; j++)
             {
                 curr = lcm(curr,nums[j]);
                 if(curr==k) cnt++;
                 if(curr>k)break;
             }
         }
     
        return cnt;
    }
};