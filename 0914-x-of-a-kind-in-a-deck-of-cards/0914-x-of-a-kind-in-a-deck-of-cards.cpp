class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
       map<int,int>mp;
        for(int i=0;i<deck.size();i++)
        {
            mp[deck[i]]++;
        }
        int gcd=0;
        for(auto i:mp)
        {
            //if(i.second%2!=0) return false; 
            gcd=__gcd(gcd,i.second);
        }
        if(gcd>=2) return true;
        else return false;
        
    }
};