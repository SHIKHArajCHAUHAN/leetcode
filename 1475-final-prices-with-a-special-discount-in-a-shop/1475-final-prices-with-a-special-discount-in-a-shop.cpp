class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
       vector<int>ans;
        for(int i=0;i<prices.size()-1;i++)
        {int exist=0,res;
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[i]>=prices[j])
                { exist=1;
                res=prices[j];
                break;}
            }
         if(exist==1)
         ans.push_back(prices[i]-res);
         else
             ans.push_back(prices[i]);
        }
        ans.push_back(prices[prices.size()-1]);
        return ans;
    }
};