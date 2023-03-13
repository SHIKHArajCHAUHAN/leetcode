class Solution {
public:
    bool good (vector<int>& candies, long long k , int divided_candy)
    {
        long long count =0;
        for(auto candy: candies) count+= (candy/divided_candy);
        return count<k ? false : true; //agr k se bdha hua to ... mid to left m shift krenge nhi to end to mid k phle krenge
    }
    int maximumCandies(vector<int>& candies, long long k)
    {
        int l = 1;
        int r = 1e9;
        int ans = INT_MIN;
        while(l<=r)
        {
            int mid =(l+r)/2;
            if(good(candies,k,mid)) ans = max(ans,mid), l = mid+1;
            else r = mid -1;
        }
        return ans == INT_MIN ? 0: ans; 
    }
};