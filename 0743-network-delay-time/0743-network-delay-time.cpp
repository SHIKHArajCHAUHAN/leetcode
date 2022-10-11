class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
     vector<pair<int, int>> adj[n+1];
        for(auto i: times){
            pair<int, int> pr = {i[1], i[2]};
            adj[i[0]].push_back(pr);
            
        }//adjecaent matrix bna liyya
        
        vector<int> dis(n+1, INT_MAX);//plhe dus ko infinioty btaynge jb chhota mila to replace
        dis[k] = 0;
        queue<int> q;
        q.push(k);
        
        while(!q.empty()){
            
            int now = q.front();
            q.pop();
            
            for(auto i: adj[now]){
                
                if(dis[i.first] > i.second + dis[now]){
                    dis[i.first] = i.second + dis[now];
                    q.push(i.first);//yha bdhte ja rhe h after checking
                }
            }
        }
        int ans = *max_element(dis.begin()+1, dis.end());
        if(ans == INT_MAX) return -1;
        return ans;
    }
};