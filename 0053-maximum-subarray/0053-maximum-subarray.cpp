class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     // int n=nums.size();
     //    int a=INT_MIN,msum=0,s=0;
     //    for(int i=0;i<n;i++){
     //         s+=nums[i];
     //        a=max(a,s-msum);
     //        msum=min(s,msum);
     //    }return a;
       ////kadane algo=====jab tk sum positive hoga sum ko 0 nhi krenge  
        int maxx=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            maxx=max(sum,maxx);
            if(sum<0)sum=0;
        }
       return maxx; 
    }
};