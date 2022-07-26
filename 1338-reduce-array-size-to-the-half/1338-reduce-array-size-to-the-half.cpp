class Solution {
public:
    int minSetSize(vector<int>& arr) {
     int n=arr.size();
     map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        priority_queue<int>pq;
        for(auto it:mp)
        {
            pq.push(it.second);
            
        }
        int count=0;
        int x=0;
        while(count<n/2)
        {
          count+=pq.top();
            pq.pop();
            x++;
        }
        if(pq.empty()) return 1;
        return x;
    }
};