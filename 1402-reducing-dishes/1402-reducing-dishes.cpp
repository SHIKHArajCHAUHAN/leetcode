class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end(),greater<int>());
            int maxx=0;
        int sum=0;
        int x=0;
        for(int i=0;i<satisfaction.size();i++)
        {
            //int x=0;
            x=x+satisfaction[i]+sum;// 
            sum+=satisfaction[i];
            maxx=max(maxx,x);
        }
        return maxx;
    }
};