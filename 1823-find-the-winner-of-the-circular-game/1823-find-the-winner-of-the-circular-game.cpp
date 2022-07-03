class Solution {
public:
    int findTheWinner(int n, int k) {
       queue<int>a;
     
       for(int i=1;i<=n;i++)                 //1 2 3 4 5 //
       {
         a.push(i);  
       }
        int m=a.size();
        while(a.size()>1){
        for( int i=1;i<k;i++)
        {
            int x=a.front();
            a.pop();
            a.push(x);
        }
        a.pop();
        }
       
        return a.front();
    }
};