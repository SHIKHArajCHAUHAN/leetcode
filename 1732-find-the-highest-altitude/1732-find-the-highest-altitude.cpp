class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       
        int sum=0;
        int maxx=0;
        for(int i=0;i<gain.size();i++)
        {
            sum+=gain[i];
            maxx=max(maxx,sum);
            
         }
        return maxx;
    
        
    }
};