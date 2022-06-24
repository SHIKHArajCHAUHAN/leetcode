class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>ans;
        int x=0;
        for(int i=0;i<n;i++)
        {int k;
        k=start+2*i;
         x=x^k;   
        }
        return x;
        
    }
};