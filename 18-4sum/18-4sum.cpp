class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {// ekkk barii wapis krna 
       int n=nums.size();
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        
        for(int i=0; i<n; ++i){
            long long rem = target - nums[i];
            
            for(int j = i+1; j < n; ++j){
                int left = j+1, right = n-1;
                long long rem2 = rem - nums[j];
                
                while(left < right){
                    if((nums[left] + nums[right]) < rem2) left++;
                    else if((nums[left] + nums[right]) > rem2) right--;
                    else{
                        int x = nums[left]; 
                        int y = nums[right];
                        v.push_back({nums[i], nums[j], nums[left], nums[right]}); 

                        while(left < right && nums[left] == x) ++left;
                        while(left < right && nums[right] == y) --right;
                    
                    }         
                }
            
                while(j + 1 < n && nums[j + 1] == nums[j]) ++j;
            }
        
            while(i + 1 < n && nums[i + 1] == nums[i]) ++i;
        }
        
        return v;
        
    }
};