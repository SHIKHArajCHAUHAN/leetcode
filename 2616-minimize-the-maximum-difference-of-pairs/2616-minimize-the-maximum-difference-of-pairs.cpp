class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
       sort(nums.begin(),nums.end());
//        priority_queue <int, vector<int>, greater<int> > pq;
//         for(int i=0;i<nums.size()-1;i+=2){
//             pq.push(abs(nums[i]-nums[i+1]));
//         }
//         int maxx=0;
//         if(pq.size()<p)return -1;
//         while(p--)
//         {
//             auto x=pq.top();pq.pop();
//             maxx=max(maxx,x);
//         }
//         return maxx;
    int l = 0, r = 1000000000;
    while (l < r) {
        int m = (l + r) / 2, cnt = 0;
        for (int i = 0; i + 1 < nums.size(); ++i)
            if (m >= (nums[i + 1] - nums[i])) {
                ++cnt;
                ++i;
            }
        if (cnt >= p)
            r = m;
        else
            l = m + 1;
    }
    return l;
    }
};