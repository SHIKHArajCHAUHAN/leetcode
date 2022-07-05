class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       vector<int>a;
        int sum=0;
        a.push_back(0);
        for(int i=0;i<gain.size();i++)
        {
        
            sum+=gain[i];
            a.push_back(sum);
         }
        int maxx=INT_MIN;
        for(int i=0;i<a.size();i++)
        {
            maxx=max(maxx,a[i]);
        }
        return maxx;
        
    }
};