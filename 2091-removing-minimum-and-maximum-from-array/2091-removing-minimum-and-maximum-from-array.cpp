class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int maxin,minin;
         int maxi=max_element(begin(nums),end(nums))-begin(nums);//max find and min find
         int mini=min_element(begin(nums),end(nums))-begin(nums);
       int a=max(maxi,mini)+1;
       int b=(min(maxi,mini));
        int z=n-b;
       int c=min(maxi,mini)+(n+1-max(maxi,mini));
       int ans=min(a,min(z,c));
        return ans; 
    }
};