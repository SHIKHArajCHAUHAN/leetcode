class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();

   /*    int sum=0;
        int ans=0;
        for(int i=0;i<k;i++)
        {
           sum+= cardPoints[i];
        }
       if(n==k) return x;
        int sum=0;
        for(int i=n-1;i>k;i--)
        {
           sum+=cardPoints[i]; 
        }
        return max(x,sum);
   ans=sum;
            for(int i=k;i<n;i++)
            {
                sum=sum-cardPoints[i-k];
                sum=sum+cardPoints[i];
                ans=max(ans,sum);
            }
        return ans;*/
        int curr_sum=0, total_sum=0, min_sum=INT_MAX, window=n-k;
        for(int i=0;i<n;i++){
            if(i<window) curr_sum+=cardPoints[i];
            else{
                min_sum=min(min_sum, curr_sum);
                curr_sum+=cardPoints[i];
                curr_sum-=cardPoints[i-window];
            }
            total_sum+=cardPoints[i];
        }
        min_sum=min(min_sum, curr_sum);
        return total_sum-min_sum;
            
    }
};