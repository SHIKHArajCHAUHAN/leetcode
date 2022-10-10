class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
          int n=prerequisites.size();
       vector<int>ind(numCourses);
        queue<int>q;
        unordered_map<int,list<int>>adj;
       
            for(int i=0;i<prerequisites.size();i++)
            {
                adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            }  
        for(int i=0;i<numCourses;i++)
        {
            for(auto it:adj[i])
            {
                ind[it]++;
            }
        }
        for(int i=0;i<numCourses;i++)
        {
            if(ind[i]==0)
                q.push(i);
        }
        vector<int>topo;
        while(!q.empty())
        {
            auto node =q.front();
            q.pop();
            topo.push_back(node);
            for(auto it:adj[node])
            {
                ind[it]--;
                if(ind[it]==0)
                    q.push(it);
            }
            
        }
        if(topo.size()==numCourses)
       return topo;
        else return {};
    }
};