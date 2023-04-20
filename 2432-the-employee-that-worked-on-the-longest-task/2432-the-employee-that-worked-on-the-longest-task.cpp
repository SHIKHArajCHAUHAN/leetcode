class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
      vector<int>mp(n,0);
        for(int i=0;i<logs.size();i++)
        {
                    if(i==0)
            {
                mp[logs[i][0]]=max(logs[i][1]-0,mp[logs[i][0]]);
            }
            else
            {
                mp[logs[i][0]]=max(logs[i][1]-logs[i-1][1],mp[logs[i][0]]);
            }
 
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(mp[i]>mp[ans])
            {
                ans=i;
            }
        }
        return ans;
        
    }
};