class Solution {
public:    /// ess question me hmm do chize shikh skte hai phla ki hmm lo log n m prme factors find kr skte hai 
    int smallestValue(int n) {
       vector<int> spf(n+1);
        
        for(int i=0; i<=n;i++){
           spf[i]=i;
       } 
        
        for(int i=2;i<=n;i++){
            if(spf[i]==i && i<=n/i){
                for(int j=i*i;j<=n;j+=i){
                   if (spf[j]==j) spf[j]=i;
                }
            }
        }
        if(spf[n]==n){
            return n;
        }
        while(spf[n]!=n || n>1){
        int x=spf[n];
        int y=n,sum=0;
        while(n>1){
       
        sum+=x;
             n=n/x;
        x=spf[n];
        }
        n=sum;
        if(spf[n]==n ||sum==y)break;     
           
         }
        
        return n;
          
    }
};