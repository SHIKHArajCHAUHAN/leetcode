class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;//do it once again// can be done in o(n3 logn) using set; a+b=-c
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n - 2; i++) {
            if (i == 0 || (i > 0 && nums[i] != nums[i-1])) {
                int j = i + 1, k = n - 1, x = 0 - nums[i];
                
                while(j < k) {
                    int curr = nums[k] + nums[j];
                    
                    if(curr == x) {
                        v.push_back({nums[i], nums[j], nums[k]});
                        while(j < k && nums[j] == nums[j + 1]) j++;
                        while(j < k && nums[k] == nums[k - 1]) k--;
                        j++;
                        k--;
                        
                    }else if(curr > x) k--;
                    else j++;
                }
            }
        }
        return v;  
    }
};