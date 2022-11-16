class Solution {// go through pick and not pick by striver by recursive way // tc=pow(2,t) 
public:
    void fn(int ind,int target,vector<int>&v,vector<vector<int>>&ans,vector<int>&ds)
    {
        if(ind==v.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(v[ind]<=target)   
        {
            ds.push_back(v[ind]);
            fn(ind,target-v[ind],v,ans,ds);
            ds.pop_back();
        }
        fn(ind+1,target,v,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     int n=candidates.size();
        vector<vector<int>>ans;
        vector<int>ds;
        fn(0,target,candidates,ans,ds);
        return ans;
        
    }
};