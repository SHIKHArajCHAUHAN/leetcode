class Solution {
public:
    int findMinFibonacciNumbers(int k) {
      vector< int>v(2,1);
int sum=k;
        int count=0;
        while(1)
        {
            int n=v.size();
            int next=v[n-1]+v[n-2];
            if(next>k) break;
            else v.push_back(next);
            
        }
        int n=v.size();
        for(int i=n-1;i>=0;i--)
        {if(k>=v[i])
        { k=k-v[i];
         count++;
        }  
        }
        return count;
    }
};