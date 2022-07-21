class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
       //shrinkflation//shrival**pitcher//lamanADE
        //sec 411 ipc =chori
        int n=mat.size();
        int r=mat.size();
        int c=mat[0].size();
        vector<pair<int,int>>ans;
        vector<int>res;
        
        for(int i =0;i<r;i++) 
       {int count=0;
          for(int j=0;j<c;j++)
          {
              count+=mat[i][j];
          }
        ans.push_back({count,i});
        }
        sort(ans.begin(),ans.end());
        
        
      /*  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
       vector<int>ans;
       int c=mat[0].size();
        int r=mat.size();
        int count=0;
       for(int i =0;i<r;i++) 
       {
          for(int j=0;j<c;j++)
          {
              count+=mat[i][j];
          }
            
        
           pq.push({count,i}) ;
       }*/
          /* while(k!=0)
           {
              ans.push_back(pq.top().second); 
               pq.pop();
               k--;
               
           }*/
               for(int i=0;i<k;i++)
               {
                   res.push_back(ans[i].second);
               }
               
       return res;
    }
};