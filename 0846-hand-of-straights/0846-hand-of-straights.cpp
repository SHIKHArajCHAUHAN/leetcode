class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
      map<int,int>mp;
        for(auto i:hand)
        {
            mp[i]++;
            
        }
        for(auto i:mp)
        {
            if(i.second==0) continue;
            int temp=i.second;
            for(int j=1;j<groupSize;j++)
            {
            if(mp.find(i.first+j)==mp.end())
              return 0;
                if(mp[i.first+j]<temp) return 0;
             mp[i.first+j]-=temp;   
            
        }
        
        }
        return 1;
    }
};