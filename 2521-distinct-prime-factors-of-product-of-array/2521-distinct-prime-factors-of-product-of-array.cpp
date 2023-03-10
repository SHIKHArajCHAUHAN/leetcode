class Solution {
public:
    int spf[100001];
    void fn(int n)
    {
       for(int i=1;i<=10000;i++)
       {
           spf[i]=i;
       }
        for(int i=2;i*i<=n;i++)
        {
            if(spf[i]==i)
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    if(spf[j]==j)
                    {
                        spf[j]=i;
                    }
                }
            }
        }    
    }
    int distinctPrimeFactors(vector<int>& nums) {
        set<int>s;
    
        for(int i=0;i<nums.size();i++)
        {
            fn(nums[i]);
            while(nums[i]!=1)
            {
            s.insert(spf[nums[i]]);
                nums[i]=nums[i]/spf[nums[i]];
        }
        }
        //  for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] == 1) s.insert(1);
        //     else{
        //         int lim = nums[i];
        //         for(int j = 2; j <= lim; j++){
        //             if(nums[i] % j == 0){
        //                 s.insert(j);
        //                 while(nums[i] % j == 0) nums[i] /= j;
        //             }
        //         }
        //     }
        // }
         return s.size();
    }
};