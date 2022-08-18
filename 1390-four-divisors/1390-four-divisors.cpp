class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        vector<int>a;
        int count=0;
        int sum=0;
      for(auto i:nums)
      {
          vector<int>v;
          for(int j=1;j<=sqrt(i);j++)
          {
              if(j*j==i)
              {
                  v.push_back(j);
              }
         else if(i%j==0)
          {
             v.push_back(j);
              v.push_back(i/j);
              
          }
          }
          if(v.size()==4)
          {
              sum+=v[0]+v[1]+v[2]+v[3];
          }
      }
       
        return sum;
        
    }
};