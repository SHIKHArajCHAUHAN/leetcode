class Solution {
public:
    int fn(int n)
    {
    int cnt=0;
        while(n!=0)
        {
            int rsbm=n&-n;
            n-=rsbm;
            cnt++;
            
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& arr) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<arr.size();i++)
        {
            pq.push({fn(arr[i]),arr[i]});
            
        }
        vector<int>ans;
        while(!pq.empty())
        {
           ans.push_back(pq.top().second) ;
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};