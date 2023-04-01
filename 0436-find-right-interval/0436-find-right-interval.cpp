class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        map<int, int> mp;
        vector<int> res;
        int n=intervals.size();
        for(int i=0; i<n; i++){
            mp[intervals[i][0]]=i;
        }
        for(auto i: intervals){
            auto itr=mp.lower_bound(i[1]); // lower bound to get the min strt point 
            if(itr==mp.end()){
                res.push_back(-1);
            }
            else{
                res.push_back(itr->second); 
            }
        }
        return res; 
    }
};