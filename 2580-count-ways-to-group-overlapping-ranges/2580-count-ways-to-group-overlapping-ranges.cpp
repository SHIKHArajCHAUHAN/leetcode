class Solution {
public:
/*static bool sortbysec(const vector<int> &a,
              const vector<int> &b)
{
    if(a[0]<b[0]) return (a[0]<b[0]);
    else if(a[1] < b[1]) return (b[1]>a[1]);
}*/
    int countWays(vector<vector<int>>& ranges) {
        sort(ranges.begin(),ranges.end());
        int n=ranges.size();
        int cnt=1;
      /*  for(int i=0;i<ranges.size()-1;i++)
        {
            if(ranges[i+1][0]>ranges[i][0]&&ranges[i+1][0]>ranges[i][1])
            {
                cnt++;
            }
        
        }
        return pow(2,cnt);*/
         for (int i = 1; i < n; ++i) {
            if (ranges[i][0] <= ranges[i - 1][1]) {
                ranges[i][1] = max(ranges[i][1], ranges[i - 1][1]);
            } else {
                cnt++;
            }
        }
        int mod = 1e9 + 7;
        long long ans = 1;
        while (cnt > 0) {
            ans = (ans * 2) % mod;
            cnt--;
        }
        return ans;
    }
};