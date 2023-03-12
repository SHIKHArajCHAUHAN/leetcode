class Solution {
public:
    int maxScore(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        long long sum=0;
        int n=nums.size();
        int i;
        for( i=nums.size()-1;i>=0;i--){
             sum+=nums[i];
           if(sum<=0) break;
        }
        return n-i-1;
        // vector<int>pos;
        // vector<int>neg;
        // for( i=0;i<nums.size();i++){
        //     if(nums[i]>0) pos.push_back(nums[i]);
        //     else neg.push_back(nums[i]);
        // }
        // nums.clear();
        // int n1=(pos.size())/2-1;
        // int n2=(neg.size())/2-1;
        // for(int i=0;i<n1;i++)
        // {
        //     nums.push_back(pos[i]);
        //     nums.push_back(pos[pos.size()-1-i]);
        // }
        // if(n1%2==1) nums.push_back(pos[n1+1]);
        //  for(int i=0;i<n2;i++)
        // {
        //     nums.push_back(neg[i]);
        //     nums.push_back(nums[neg.size()-1-i]);
        // }
        // if(n2%2==1) nums.push_back(neg[n2+1]);
        // pos.clear();neg.clear();
        // vector<int>pre(nums.size(),0);
        // pre[0]=nums[0];
        // for(int i=1;i<nums.size();i++)
        // {
        //     pre[i]=pre[i-1]+nums[i];
        // }
        // long long ans=pre[0];
        // for(int i=1;i<nums.size();i++)
        // {
        //     if(pre[i]>pre[i-1])ans=pre[i];
        //         else break;
        // }
        // return ans;
        //  map<int, int>pref;
        // long long res = 0, xorr = 0;
        // pref[0] = 1;
        // for(int i=0; i<nums.size(); i++)
        // {
        //     xorr ^= nums[i];
        //     if(pref.find(xorr)!=pref.end()) res = res + pref[xorr];
        //     pref[xorr]+=1;
        // }
        // return res;
        
    }
};