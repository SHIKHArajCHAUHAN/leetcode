class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int n=nums.size();
        int maxx=0;
    int sum=0;
        for(int i=0;i<n;i++)
        {
           
            if(nums[i]==1) sum++;
            else 
            {
             // maxx=max(maxx,sum) ; 
              sum=0;  
            }
            
            maxx=max(maxx,sum);
        }
        return maxx;
    }
};