class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int N=bloomDay.size();
      int low=1,high=INT_MIN,ans=-1;
        for(auto i:bloomDay) 
          high=max(high,i);
        while(low<=high)
        {
            int mid=(low+high)/2;
            int cnt = 0, parts = 0; 
            for (int i = 0; i < N; ++i) {
                if (bloomDay[i] <= mid) cnt++;
                else cnt = 0;
                if (cnt == k) {
                    parts++;//partion jo valid ho
                    cnt = 0;
                }
            }
            if (parts < m) {
                low = mid + 1;
            } else {
                ans = mid;
                high = mid - 1;
            }
        }
        
        return ans;

    }
};