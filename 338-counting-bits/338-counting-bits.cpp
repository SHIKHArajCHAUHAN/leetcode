class Solution {
public:
    vector<int> countBits(int n) {
      vector<int>v;
        for(int i=0;i<=n;i++){
        
         int num=i;int count=0;
        while(num!=0)
        {
           count+=num%2;
            num=num/2;
        }
            v.push_back(count);}
        return v;
    }
};