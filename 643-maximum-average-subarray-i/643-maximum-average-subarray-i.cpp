class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double maxx=INT_MIN;
        double sum=0;
        int n=nums.size();
        
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        maxx=max(maxx,sum/k);
        for(int i=k;i<n;i++)
        {
            sum=sum+nums[i]-nums[i-k];
            maxx=max(maxx,sum/k);
        }
        return maxx; 
    }
};