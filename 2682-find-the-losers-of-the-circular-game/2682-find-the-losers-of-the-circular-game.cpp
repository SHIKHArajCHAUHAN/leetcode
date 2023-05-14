class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
//       vector<int>ans;
//         vector<bool>vis(n,false);
//         int i=1;int j=0;
//         while(j+i*k<=n)
        
//         {
            
//             vis[j+i*k-1]=true;j=i*k-1;
//             i++;
            
//         }
//         for(int i=0;i<vis.size();i++)
//         {
//             if(vis[i]==true)ans.push_back(i+1);
//         }
//         return ans;
         vector<bool>vis(n+1,false);
        vector<int>ans;
        for(int i=1, mul=1 ; !vis[i]; mul++)
        {
            vis[i]=true;
            i=(i+mul*k)%n;
            if(i==0)i=n;
        }
        
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==false)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};