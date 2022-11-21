class Solution {
public:
    int halveArray(vector<int>& nums) {
       double sum=0,sum2;
        priority_queue<double>pq;
       for(int i=0;i<nums.size();i++)
       {
           sum+=nums[i];
           pq.push(nums[i]);
       }
         sum2=sum;
        int cnt=0;
       while(!pq.empty())
        {
            double x=pq.top();
            pq.pop();
            sum2=sum2-(x/2);
            if(sum2<=(sum/2))
            {cnt++;break;}
           
              cnt++;
            pq.push(x/2);
        }
        return cnt;
         
        
    }
};