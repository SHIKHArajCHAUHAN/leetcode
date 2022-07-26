class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
      map<int ,int>r_map;
        map<char,int>s_map;
        for(int i=0;i<ranks.size();i++)
        {
            r_map[ranks[i]]++;
        }
        for(int i=0;i<suits.size();i++)
        {
            s_map[suits[i]]++;
        }
        for(auto it_s:s_map)
        {
            if(it_s.second==5)
              return "Flush";  
        }
        for(auto it_r:r_map)
        {
            if(it_r.second>=3)
                return "Three of a Kind";
           
        }
        for(auto it_r:r_map)
        {
            if(it_r.second==2)
                return "Pair";
        }
        return "High Card";
    }
};