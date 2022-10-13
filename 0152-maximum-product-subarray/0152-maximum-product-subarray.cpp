class Solution {
public:
    int maxProduct(vector<int>& nums) {
       /* int n=nums.size();
        int j=0,i=0;
        int prod=1;
        int maxx=INT_MIN;
        while(j<n)
        {
            prod*=nums[j];
            if(maxx<prod)
            {
                maxx=prod;
                j++;
            }
            else if(maxx>=prod)
            {
            while(i<n&&maxx>=prod&&nums[i]!=0)
            {
                prod/=nums[i];
                i++;
                maxx=max(maxx,prod);
            }
           j++; 
            }
        }
            return maxx;*/
        int maxx=INT_MIN,prod=1;
        if(nums.size()==1) return nums[0];

        for(int i=0;i<nums.size();i++){
           prod*=nums[i];
           if(prod>maxx) maxx=prod;
           if(prod==0) prod=1;
        }

        prod=1;
        
         for(int i=nums.size()-1;i>=0;i--){
           prod*=nums[i];
           if(prod>maxx) maxx=prod;
        
           if(prod==0) prod=1;
        }
        return maxx;
    }
};