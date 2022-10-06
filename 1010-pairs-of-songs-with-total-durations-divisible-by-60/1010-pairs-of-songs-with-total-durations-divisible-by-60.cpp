class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
       /* int count=0;
        for(int i=0;i<time.size()-1;i++)
        {
            for(int j=i+1;j<time.size();j++)
            {
                if((time[i]+time[j])%60==0)count++;
            }
        }
        return count;*/
         int ans = 0;
        unordered_map<int,int> mp;
        for(int& t: time)
        {
            ans += (mp[(60-t%60)%60]);
            ++mp[t%60];
        }
    
        return ans;
          
   
    }
};