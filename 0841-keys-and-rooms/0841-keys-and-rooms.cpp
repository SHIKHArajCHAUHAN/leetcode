class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int> q;
        set<int> vis;
        vis.insert(0);
        for(int it : rooms[0]){
            q.push(it);
        }
        while(!q.empty()){
            auto now = q.front();
            q.pop();
            if(vis.find(now) != vis.end()){
                continue;
            }else{
                vis.insert(now);
                for(int i: rooms[now]){
                    if(vis.find(i) != vis.end()){
                        continue;
                    }else{
                        q.push(i);
                    }
                }
            }
        }
        if( vis.size() == rooms.size()) return true;
        else return false;
    }
};