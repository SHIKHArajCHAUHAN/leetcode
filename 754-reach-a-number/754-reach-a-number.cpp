class Solution {
public:
    int reachNumber(int target) {
        
      int sum=0;
        int i=0;
        target=abs(target);
        while(sum<target)
        {
            sum+=i;
            i++;
        }
        while((sum-target)%2==1)
        {
            sum+=i;
            i++;
            }
        return i-1;
    }
};