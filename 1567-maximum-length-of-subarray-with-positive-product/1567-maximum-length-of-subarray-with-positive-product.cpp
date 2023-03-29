class Solution {
public:
    ///done with the help
    int getMaxLen(vector<int>& nums) {
       int firstNeg = -1;
        int start = 0;
        int prod = 1;
        int ans = 0;
        for (int i = 0 ; i < nums.size(); ++i) {
            if (prod == 0) {
                prod = 1;
                firstNeg = -1;
                start = i;
               
            }
            prod *= (nums[i] > 0 ? 1: nums[i] < 0 ? -1 : 0);
           
            if (prod > 0) {
                ans = max(ans, i-start+1);
               
            } else if (prod < 0 ) {
                if (firstNeg >= 0)
                    ans = max(ans, i - firstNeg);
            }
            if (firstNeg == -1 && prod < 0) {
                firstNeg = i;
            }
        }
        return ans;  
    }
};