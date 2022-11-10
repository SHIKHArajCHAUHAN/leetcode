class Solution {
public:
    vector<long long> sumOfThree(long long num) {
      long long x=num/3;
        if(x+x+x==num) return {x-1,x,x+1};
        else return {};
    }
};