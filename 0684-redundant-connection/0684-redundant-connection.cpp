class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
     vector<int>ds(n+1);
        vector<int>rank(n+1,1);
        for(int i=0;i<=n;i++)
        {
            ds[i]=i;
        }
        for(auto v:edges)
        {
            int e1=v[0];
            int e2=v[1];
            int p1=findpar(e1,ds);
            int p2=findpar(e2,ds);
         if(p1==p2)     return v;
            // else
            // {
            //     ds[p2]=p1;
            // }
          else{  if(rank[p1]<rank[p2])
            {
                ds[p1]=p2;
            }
            else if(rank[p1]>rank[p2])
            {
                ds[p2]=p1;
            }
           else {
               ds[p1]=p2;
                rank[p2]++;
           } 
              }  
        }
        return {};
    }
     int findpar(int ele,vector<int>&ds)
     {
         if(ds[ele]==ele) return ele;
         return findpar(ds[ele],ds);
     }
    
};