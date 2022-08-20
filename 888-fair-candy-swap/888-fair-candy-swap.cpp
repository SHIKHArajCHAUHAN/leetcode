class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
      vector<int>v;
      int sum_alice=0;
        int sum_bob=0;
        for(int i=0;i<aliceSizes.size();i++)
        {
           sum_alice+= aliceSizes[i];
        }
        for(int i=0;i<bobSizes.size();i++)
        {
            sum_bob+=bobSizes[i];
        }
        int diff=(sum_bob-sum_alice)/2;
        unordered_set<int>s(bobSizes.begin(),bobSizes.end());
        for(auto i:aliceSizes)
        {
            if(s.find(i+diff)!=s.end())
            {
                v.push_back(i);
                v.push_back(i+diff);
                break;
            }
        }
        
       return v;     
    }
};