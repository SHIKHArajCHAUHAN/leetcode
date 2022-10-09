class Solution {
public:
    void wiggleSort(vector<int>& nums) {
       // sort(nums.begin(),nums.end());
    /*  for(int i=0;i<nums.size()-1;i++)
      {
          if((i%2==0)==(nums[i]>=nums[i+1]))
              swap(nums[i],nums[i+1]);
      }*/
         int n = nums.size();
        if(n<=1)    return;
        vector<int>ans;
        ans=nums;
        sort(ans.begin(),ans.end());
        int j=n-1,i=1;
        while(j>=0)
        {
            nums[i] = ans[j];
            j--;
            i += 2;
            if(i>=n)    i=0;
        }
    }
};