class Solution {
public:
    int largestCombination(vector<int>& candidates) {
      int mx=0;
       for(int i=0;i<24;i++)
       {
           int cnt=0;
           for(int j=0;j<candidates.size();j++)
           {
               
               if(candidates[j]&(1<<i))cnt++;
               mx=max(mx,cnt);
           }
       }
        return mx;
    }
};