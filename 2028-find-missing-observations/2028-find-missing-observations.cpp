class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int>v(n,0);
        int sum=0;
        int n1=rolls.size();
        for(int i=0;i<rolls.size();i++)
        {
            sum+=rolls[i];
        }
        sum=(n1+n)*mean-sum;
        if(sum<n) return {};
        if(sum>6*n) return {};
        int i=0;
        while(sum)
        {
            v[i]++;
            sum--;
            i++;
            if(i==n)
            {
                i=0;
            }
            
        }
        
        return v;
        
    }
};