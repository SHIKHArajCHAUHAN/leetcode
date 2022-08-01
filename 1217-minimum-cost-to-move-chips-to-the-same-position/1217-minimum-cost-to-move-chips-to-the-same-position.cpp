class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int cnt1=0;
        int cnt2=0;
       for(int i=0;i<position.size();i++)
       {
           if(position[i]%2==0)
           {
               cnt1++;
           }
           else cnt2++;
       }
        return min(cnt1,cnt2);
    }
};