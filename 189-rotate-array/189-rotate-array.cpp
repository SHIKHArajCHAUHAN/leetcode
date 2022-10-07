class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
       int n = nums.size();
        
       vector<int> ans(n,0);                   
        for(int i= 0;i<n;i++){
                                                    
            ans[(i+k)%n] = nums[i]; //out of bound naa jay
            
            
        }
        nums = ans; 
      /*  for(int i=0;i<k;i++)
        {
            swap(nums[i],nums[n-i-1]);
        }
        reverse(nums.begin(),nums.begin()+k-1);
        reverse(nums.begin()+k+1,nums.end());*/
        
    }
};