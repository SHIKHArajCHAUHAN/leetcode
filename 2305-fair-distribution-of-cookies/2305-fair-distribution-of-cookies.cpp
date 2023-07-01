class Solution {
    public:
    int fn(int ind,vector<int>&childs,const vector<int>&cookies)
    {
        if(ind==cookies.size())
        {
            int ans=0;
            for(auto i:childs)
            {
                ans=max(ans,i);
            }
                return ans;
            
        }
        int ans=INT_MAX;
        for(int j=0;j<childs.size();j++)
        {
            childs[j]+=cookies[ind];
            ans=min(ans,fn(ind+1,childs,cookies));
            childs[j]-=cookies[ind];
        }
        return ans;
    }
public:
    int distributeCookies(vector<int>& cookies, int k) {
      vector<int>childs(k);
        return fn(0,childs,cookies);
    }
};