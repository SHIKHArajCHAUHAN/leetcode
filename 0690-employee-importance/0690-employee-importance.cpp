/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, Employee*> mp;
        for(auto i:employees) mp[i->id]=i;
        unordered_set<int> vis;
        queue<int> q;
        q.push(id);
        vis.insert(id);
        int ans=0;
        while(!q.empty()){
            int t_id=q.front();
            ans+= mp[t_id]->importance;
            q.pop();
            for(auto i:mp[t_id]->subordinates){
                if(!vis.count(i)){
                    vis.insert(i);
                    q.push(i);
                }
            }
        }
        return ans;
    }
};