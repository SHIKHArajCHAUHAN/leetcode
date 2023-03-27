class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
       int n=seats.size();
           int first = 0;
        int maxx = INT_MIN;
        for (int i = 0; i <n; i++)
        {
            if (seats[i])
            {
                maxx = seats[first] ? max(maxx, (i - first) / 2) : i;   //agr phla one hai to   /2 kreke maxx ans find k lenge agr nhi hai to chlte jaynge;   
                first = i;
            }
        }
        return max(maxx, int(n - 1 - first));  
    }
};