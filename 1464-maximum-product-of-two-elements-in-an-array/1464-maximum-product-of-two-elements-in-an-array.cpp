class Solution {
public:
    int maxProduct(vector<int>& nums) {
      //-9 -8 1 2 3 
        int n=nums.size();
        int maxx=INT_MIN;
         int sum=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {sum=(nums[i]-1)*(nums[j]-1);
             maxx=max(maxx,sum);
                
            }
        }
        return maxx;
    }
};