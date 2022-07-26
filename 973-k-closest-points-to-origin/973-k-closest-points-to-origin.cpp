class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
      priority_queue<pair<int,int> ,vector<pair<int,int>>,greater<pair<int,int>>>pq;
      //  vector<vector<int>>v;
        for(int i=0;i<points.size();i++)
        {
            pq.push({points[i][0]*points[i][0]+points[i][1]*points[i][1],i});
        }
                vector<vector<int>>v;

          for(int i=0;i<k;i++)
          {
              v.push_back(points[pq.top().second]);
              pq.pop();
          }
        
    return v;
    }
};