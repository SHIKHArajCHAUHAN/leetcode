class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
      int n=candyType.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
            {
                mp[candyType[i]]++;
            }
        int x=n/2;
        if(x<mp.size())
        {
            return x;
        }
         else return mp.size();
    }
};