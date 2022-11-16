class Solution {
public:
      void fn(int ind,int target,vector<int>&v,vector<vector<int>>&ans,vector<int>&ds)
    {
       
            if(target==0)
            {
                ans.push_back(ds);
            
            return;
        }
          for(int i=ind;i<v.size();i++)
          {
              if(i>ind&&v[i]==v[i-1])continue;
        if(v[i]>target)  break; 
        
            ds.push_back(v[i]);
            fn(i+1,target-v[i],v,ans,ds);
            ds.pop_back();
        
          }
       // fn(ind+1,target,v,ans,ds);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        vector<int>ds;
        fn(0,target,candidates,ans,ds);
        return ans;
    }
};