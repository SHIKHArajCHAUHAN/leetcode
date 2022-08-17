class Solution {
public:
    int lastRemaining(int n) {
       ///mai call lgaungi remaining n/2 element k liy hi//
        //or 
    if(n==1) return 1;
        return 2*(n/2+1)-2*lastRemaining(n/2);
    }
};