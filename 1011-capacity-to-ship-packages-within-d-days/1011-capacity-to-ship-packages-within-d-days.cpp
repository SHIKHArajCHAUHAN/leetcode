class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
       int total = 0;
        for(auto& i: weights) total += i;
        
        int maxx = *max_element(weights.begin(), weights.end());
        
        int s = maxx, e = total, mid, res;
        while(s <= e) {
            mid = s+ (e - s) / 2;
            
            int count = 1, sum = 0;
            
            for(int i=0;i<weights.size();i++) {
                if(sum + weights[i] > mid) {
                    count++;
                    sum = 0;
                }
                sum += weights[i];
            }
            if(count <= days) {
                res = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        
        return res;
 
    }
};