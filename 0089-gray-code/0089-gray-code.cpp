class Solution {
public:
    vector<int> grayCode(int n) {
     if(n==1)
     {
        return {0,1};
     }
        vector<int>rres=grayCode(n-1);
    
         for(int i=rres.size()-1;i>=0;i--)
        {
           // string str=rres[i];
            rres.push_back(rres[i]+pow(2,n-1));
        }
        return rres;
    }
};