class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
       int ans = INT_MIN;// done with the help
        sort(begin(heaters), end(heaters));
        int minn = heaters.front();
        int maxx = heaters.back();
        for(int a: houses) {
            if (a <= minn) {
                ans = max(ans, minn - a);
                continue;
            }
            if (a >= maxx) {
                ans = max(ans, a - maxx);
                continue;
            }
            auto it = upper_bound(heaters.begin(), heaters.end(), a);
            ans = max(ans, min(*it - a, a - *prev(it)));
        }
        return ans ; 
    }
};    //use ceil and floor to get the distance the of houses 