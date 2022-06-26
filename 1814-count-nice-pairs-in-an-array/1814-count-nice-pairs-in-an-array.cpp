class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        map<int,int>ans;
        long int count=0;
        for(int i=0;i<nums.size();i++)
        {
            int r=0,temp=nums[i];
            while(temp!=0)
            {
                r=r*10+temp%10;
                temp/=10;
            }
            ans[nums[i]-r]++;
        }
        for(auto i:ans)
        {
            long int n=i.second;
           count+=(n*(n-1))/2; 
        }
        return count%1000000007;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
            /*    int n=nums.size();
        vector<int>num2;
        vector<int>num3;
        for(int i=0;i<n;i++){
            num3.push_back(nums[i]);
        }
        int count=0;
       for(int i=0;i<n;i++){
          int r=0;
           while(nums[i]!=0){
           r=r*10+nums[i]%10;
               nums[i]/=10;
          // num2.push_back(r);
           }
           num2.push_back(r);
       } 
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++){
                if(num3[i]+num2[j]==num3[j]+num2[i])
                    count++;
            }
        }
        return count ;*/
    }
};