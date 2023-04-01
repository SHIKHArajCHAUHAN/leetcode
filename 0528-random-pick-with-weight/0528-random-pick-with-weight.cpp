class Solution {
public:
      vector<int>v;
    Solution(vector<int>& w) {
        v.push_back(w[0]);
       for(int i=1;i<w.size();i++)
       v.push_back(v[i-1]+w[i]);//pre sum calc
    }
    
    int pickIndex() {
        int r=rand()%v.back();//div by totl sum
        auto it=upper_bound(v.begin(),v.end(),r);
        return it-v.begin();
    }
};


/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */