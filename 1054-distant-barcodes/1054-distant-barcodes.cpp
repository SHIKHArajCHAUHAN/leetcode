class Solution {// bhut easy hai map or priority queue lo or jyse hint bol rha kro
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
       map<int, int> mp;
          vector<int> v;
        priority_queue<pair<int, int>> pq;
        for(int i = 0; i < barcodes.size(); i++)
        {
            mp[barcodes[i]]++;
        }
        for(auto i : mp)
            pq.push({i.second, i.first});
        while(pq.size() > 1)
        {
            auto x = pq.top();
            pq.pop();
            auto y = pq.top();
            pq.pop();
            
            v.push_back(x.second);
            v.push_back(y.second);
            
            x.first--;
            y.first--;
            
            if(x.first > 0)
                pq.push(x);
            if(y.first > 0)
                pq.push(y);            
        }
        if(pq.size() == 1)
            v.push_back(pq.top().second);
        return v; 
    }
};