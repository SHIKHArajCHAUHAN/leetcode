class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
      // sort(nums.begin(),nums.end());
      /*  int n= nums.size();
        vector<int>v;
        for(int i=0;i<queries.size();i++)
        {
              int  k=0,j=0,maxx=0,cnt=0;
        while(j<n)
        {
           cnt+=nums[j];
            if(cnt<=queries[i])
            {
                
                maxx=max(maxx,j-k+1);
                j++;
            }
            else if(cnt>queries[i])
            {
                while(cnt>queries[i])
                {
                    
                    cnt-=nums[k];
                    k++;
                }
            j++;
            }  
        }
            v.push_back(maxx);
        }
        return v;*/
           sort(nums.begin(), nums.end());
        vector<int> v;
        for(int i=0;i<queries.size(); i++){
            int sum =0 , count = 0;
            int j = 0;
            while(sum<=queries[i] && count<nums.size() && j<nums.size()){
                sum+=nums[j];
                if(sum<=queries[i]){
                count++;
                }
                j++;
            }
            v.push_back(count);
        }
        return v;
    
    }
};