class Solution {
public:
    int maximumSum(vector<int>& nums) {
     map<int,priority_queue<int>>mp;
        int maxx=-1;
        for(auto i :nums)
        {int sum=0;
         int temp=i;
         while(temp)
         {
             sum+=temp%10;
             temp=temp/10;
         }
         mp[sum].push(i);
            
        }
        for(auto i:mp)
        {
            if(i.second.size()>1)
            {
               int a=i.second.top();i.second.pop();
                maxx=max(maxx,a+i.second.top());
            }
        }
        return maxx;
        
    }
};