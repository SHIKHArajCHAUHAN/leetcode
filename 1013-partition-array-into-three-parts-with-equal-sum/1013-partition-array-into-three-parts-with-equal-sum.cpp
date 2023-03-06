class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
       int sum=0;
        for(auto i:arr)
        {
            sum+=i;
        }
        if(sum%3!=0) return false;
        int cnt=0;
        int sumc=0;
        for(int i=0;i<arr.size();i++)
        {
            sumc+=arr[i];
            if(sumc==sum/3)
            {cnt++;sumc=0;}
           
        }
        if(cnt>=3) return true;
        else return false;
    }
};