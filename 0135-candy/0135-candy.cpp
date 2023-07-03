class Solution {
public:
    int candy(vector<int>& ratings) {
        int N=ratings.size();
          vector<int>ans(N,1);//ek do dena hi prega as per question
        
        for(int i=1;i<N;i++)
        {
            if(ratings[i]>ratings[i-1]) ans[i]=1+ans[i-1];  //left neighbr
        }
        for(int i=N-2;i>=0;i--)
        {//right neighbr
        if(i==0) { //edge case
            if(ratings[i]>ratings[1]) ans[i]=1+ans[1]; break;
        }
            if(ratings[i]>ratings[i+1]) 
            {
                if(ans[i]<=ans[i+1]) ans[i] = 1+ans[i+1];
            }
        }
        
        int sum=0;
        for(int i:ans) sum+=i;
        
        return sum; 
    }
};