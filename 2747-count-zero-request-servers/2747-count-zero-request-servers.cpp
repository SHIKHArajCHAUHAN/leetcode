class Solution {
public:
    vector<int> countServers(int m, vector<vector<int>>& logs, int x, vector<int>& queries){
        //done with help
       int n=logs.size();
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++)
        vp.push_back({logs[i][1],logs[i][0]});
        sort(vp.begin(),vp.end());
        map<int,int>mp;
        int q=queries.size();
        vector<pair<int,int>>vq;
        for(int i=0;i<q;i++)
        vq.push_back({queries[i],i});
        sort(vq.begin(),vq.end());
        int i=0,j=0;
        vector<int>ans(q);
        for(int k=0;k<q;k++)
        {
            int f=vq[k].first;
            int s=vq[k].second;
            int start=max(0,f-x);
            int end=f;
            while(j<n && vp[j].first<=end)
            {
                mp[vp[j].second]++;
                j++;
            }
            while(i<n && vp[i].first<start)
            {
                mp[vp[i].second]--;
                if(mp[vp[i].second]==0)
                mp.erase(vp[i].second);
                i++;
            }
            ans[s]=m-mp.size();
        }
        return ans;
    }
};