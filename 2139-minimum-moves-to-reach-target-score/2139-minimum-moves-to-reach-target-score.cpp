class Solution {
public:

    int minMoves(int target, int maxDoubles) {
      // return fn(target, maxDoubles); 
        /* if(target==0) return 0;
        if(maxDoubles==0) return target-1;
        if(target&1)
           return 1+minMoves(target-1,maxDoubles); 
        else return 1+minMoves(target/2,maxDoubles-1);*/
         int count=0;
        while(target!=1){
            if(target%2==0 && maxDoubles>0){
                target/=2;
                maxDoubles--;
                count++;
            }
            else if(target%2!=0 && maxDoubles>0){
                 target-=1;
                  count++;
            }
            else if(maxDoubles==0){ 
                count+=target-1;
                target=1;
            }
        }
        return count;
    }
};