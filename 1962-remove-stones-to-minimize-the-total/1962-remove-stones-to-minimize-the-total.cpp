class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
      priority_queue<int>pq;
        for(int i=0;i<piles.size();i++)
        {
            pq.push(piles[i]);
        }
        int sum=0;
        while(k--)
        {
           int x=pq.top();pq.pop();
            if(x%2==0) pq.push(x/2);
            else
            pq.push(x/2+1);
        }
        while(!pq.empty())
        {
            sum+=pq.top();pq.pop();
        }
        return sum;
    }
};