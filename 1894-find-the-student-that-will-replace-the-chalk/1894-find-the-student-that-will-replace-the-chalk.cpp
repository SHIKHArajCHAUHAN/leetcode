class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
     long long sum=0;
        for(int i=0;i<chalk.size();i++)
        {
            sum+=chalk[i];
        }
        long long res=k%sum;
        vector<long long>pre(chalk.size(),0);
        pre[0]=chalk[0];
        for(int i=1;i<chalk.size();i++){
            pre[i]=pre[i-1]+chalk[i];
        }
        for(int i=0;i<pre.size();i++)
        {
            if(res<pre[i]) return i;
        }
        return 0;
    }
};