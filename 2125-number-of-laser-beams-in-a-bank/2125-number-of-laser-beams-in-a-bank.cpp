class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
       int row=bank.size();
        int multi=1;
        int sum=0;
        int ans=0;
        int col=bank[0].length();
        for(int i=0; i<row; i++){
             int count=0;
            for(int j=0; j<col; j++){
               if(bank[i][j]=='1'){
                   count++;
                }
            }
            if(count!=0){
                 sum++;
                }
          if(count!=0 && sum<2){
           multi*=count;
            }
           if(count!=0 && sum>=2){
           ans+=multi*count;
           multi=count;
            }
        }
        return ans;  
    }
};