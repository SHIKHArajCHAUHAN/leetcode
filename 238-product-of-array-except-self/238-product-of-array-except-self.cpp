class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n=nums.size();
        vector<int>v(n,nums[0]);
        int product=1;
       /* for(int i=0;i<n;i++)
        {
                    int product=1;

            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                   product*=nums[j]; 
                }
            }v.push_back(product);
        }*/
        for(int i=1;i<n;i++) {v[i]=v[i-1]*nums[i];}
        for(int i=n-1;i>0;i--)
        {
           v[i]=v[i-1]*product;
            product*=nums[i];
        }v[0]=product;
        return v;
    }
};