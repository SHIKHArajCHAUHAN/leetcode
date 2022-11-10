class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
       sort(special.begin(),special.end());
        int mx=special[0]-bottom;
        for(int i=1;i<special.size();i++)
        {
          mx=max(mx,(special[i]-special[i-1]-1)) ; 
        }
        mx=max(mx,(top-special[special.size()-1]));
        return mx;
    }
};