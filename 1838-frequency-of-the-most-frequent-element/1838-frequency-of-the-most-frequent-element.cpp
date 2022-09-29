class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        
		sort(nums.begin(), nums.end());

		long  n = nums.size();
		long  i = 0,j=0;
		long  maxx = 1;
		long  sum = 0;

		while(j < n) {

			sum += nums[j];

			while((j-i+1)*nums[j]- sum > k and i <= j) {

				sum -= nums[i];
				i++;

			}

			maxx= max(maxx, j-i+1);
			j++;
		}

		return maxx;
    }
};