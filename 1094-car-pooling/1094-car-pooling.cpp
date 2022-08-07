class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
   /*  priority_queue<pair<int,int>>pq;
        for(int i=0;i<trips.size();i++)
        {
            pq.push({trips[i][1],trips[i][2]});
        }*/
        int sum=0;
        int arr[1001]={0};
        
        for(auto i:trips)
        {if(i[0]>capacity) return false;
            for(int j=i[1];j<i[2];j++)
            {
               arr[j] +=i[0];
            }
        }
        
        for(int i=1;i<1001;i++)
        {
            if(arr[i]>capacity)
                return false;
        }
        return true;
        
    }
};