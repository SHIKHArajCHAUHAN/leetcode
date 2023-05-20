class Solution {
public:
    void cal(int n, int pos,vector<bool>&vis,int &cnt)
    {
        if(pos>n) cnt++;
        for(int i=1;i<=n;++i)
        {
            if(!vis[i]&&(pos%i==0||
               i%pos==0))
            {
                vis[i]=true;
                cal(n,pos+1,vis,cnt);
                vis[i]=false;
            }
        }
    }
    int countArrangement(int n) {
      vector<bool>vis(n+1,false);
        int cnt=0;
        cal(n,1,vis,cnt);
        return cnt;
    }
};