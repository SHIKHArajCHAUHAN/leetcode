class Solution {
public:
     void seive(vector<bool>&arr,int n){
         for(int i=2;i<n;i++){
             if(arr[i]==false){
                 continue;
             }
             for(int j=i*2;j<n;j+=i){
                 arr[j]=false;
             }
         }
    }
    bool primeSubOperation(vector<int>& nums) {
        int n=nums.size();
        int k=n;
        vector<bool>isPrime(1001,true);
        isPrime[0]=false;
        isPrime[1]=false;
         seive(isPrime,1001);
         vector<int>prime;
         for(int i=0;i<1001;i++){
             if(isPrime[i]){
                 prime.push_back(i);//prime vector bnha liya
             }
         }
        int prev=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(nums[i]<prev){
                prev=nums[i];
                continue;
            }
            bool flag=true;
            for(int j=0;j<prime.size();j++){
                if(prime[j]>=nums[i]){
                    break;
                }
                if((nums[i]-prime[j])<prev){
                    prev=nums[i]-prime[j];
                    nums[i]=prev;
                    flag=false;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]>=nums[i+1]){
                return false;
            }
        }
        return true ;  
    }
};