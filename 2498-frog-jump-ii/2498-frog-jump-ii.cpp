class Solution {
public:
    int maxJump(vector<int>& stones) {
        if (stones.size()<=2) return stones[1]-stones[0];
        int res=0;
        for (int i=0; i<stones.size()-2; i++) {
            res=max(res, stones[i+2]-stones[i]);
        }
        return res; 
    }
};