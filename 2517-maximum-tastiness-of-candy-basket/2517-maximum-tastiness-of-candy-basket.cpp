class Solution {
public:
     bool check(vector<int> &price, int mid, int k) {
        int prev = price[0];
        for(int i = 1; i < price.size(); i++) {
            if(price[i] - prev >= mid) {
                k--;
                prev = price[i];
            }
        } 
        return k <= 1;
    }
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(), price.end());
        int low = 0;
        int high = 1e9;
        int ans = 0;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(check(price, mid, k)) {
                ans = max(ans, mid);
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans; 
    }
};