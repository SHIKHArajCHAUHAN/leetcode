class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
       map<char,int>mp;
        for(char c:tasks) mp[c]++;
        priority_queue<int>pq;
        for(auto i:mp)
        {
            pq.push(i.second);
        }
        int res=0;
        while(!pq.empty())
        {
            int time=0;
            vector<int>v;
            for(int i=0;i<=n;i++)
            {
                if(!pq.empty())
                {
                    v.push_back(pq.top()-1);
                    pq.pop();
                time++;
            }
        }
        for(auto t:v)
        
            if(t) pq.push(t);
            if(pq.empty()) res+=time;
            else res+=(n+1);
       // res+=pq.empty?time:n+1;
        }
        return res;
    }
};