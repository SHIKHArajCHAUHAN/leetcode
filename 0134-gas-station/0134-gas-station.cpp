class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      int total=0;
        int res=0;
        for(int i=0;i<gas.size();i++)
        {
            total+=gas[i];
            res+=cost[i];
        }
        if(res>total) return -1;
        total=0;
        res=0;
        for(int i=0;i<gas.size();i++)
        {
            total+=(gas[i]-cost[i]);
            if(total<0)
            {
              total=0;
                res=INT_MAX;
            }
            else res=min(res,i);
        }
        return res;
    }
};