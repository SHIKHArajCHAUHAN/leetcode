class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
     /* int n=flips.size();
        vector<int>v;
        while(n--)
        {
            v.push_back(0);
        }
        int cnt=0;
        for(int i=0;i<flips.size();i++)
        {
            v[i]=flips[i];
            
        }*/
        int cnt=0;
        int mxx=INT_MIN;
        for(int i=0;i<flips.size();i++)
        {
            mxx=max(mxx,flips[i]);
            if(mxx==i+1) cnt++;
        }
        return cnt;
    }
};