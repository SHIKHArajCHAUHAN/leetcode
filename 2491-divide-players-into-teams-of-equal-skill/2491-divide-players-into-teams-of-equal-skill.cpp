class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
     sort(skill.begin(),skill.end());
     map<int,int>mp;
        int n=skill.size();
        if(n%2==1) return -1;
        long long product=0;
        for(int i=0;i<n/2;i++)
        {
            mp[skill[i]+skill[n-1-i]]++;
            product+=skill[i]*skill[n-1-i];
        }
        if(mp.size()!=1) return -1;
        return product;
        
    }
};