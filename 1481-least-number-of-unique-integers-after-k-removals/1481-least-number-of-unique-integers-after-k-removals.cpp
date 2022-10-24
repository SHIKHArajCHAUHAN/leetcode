class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
       map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
         priority_queue<int,vector<int>,greater<>>pq;
        for(auto i:mp)
        {
            pq.push(i.second);
        }
        while(!pq.empty() && k>0){
            int x=pq.top();
            pq.pop();
            int r=min(x,k);
            k-=r;
            if(x>r)pq.push(x-r);
        }
        return pq.size();
        
    }
};