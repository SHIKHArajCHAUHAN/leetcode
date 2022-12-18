class Solution {
public:
    bool hasAlternatingBits(int n) {
         if(n==1)// right shift kr k
        return true;
        int prev = n%2;
        n/=2;
        int curr = n%2;
        n/=2;

        while(n)
        {
            if(prev == curr)
                return false;

            prev = curr;
            curr = n%2;
            n/=2;
        }

        if(prev == curr)
        return false;
        else
        return true ; 
    }
};