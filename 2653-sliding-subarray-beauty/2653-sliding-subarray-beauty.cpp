class Solution {
public:
     int getElement(vector<int>& neg, int x){
        int i;
        int count=0;
        for(int i=50; i>=0; i--){
            count+=neg[i];
            if(count>=x)
                return i*-1;
        }
        return 0;
    }
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int> neg(51,0);  //////taken   /help 
        int i=0, j=0;
        int n=nums.size();
        vector<int> ans;
        while(j<n){
           
            if(nums[j]<0)   neg[abs(nums[j])]++;

            if(j-i+1<k){
                j++;

            }else if(j-i+1==k){
                int res = getElement(neg, x);
                ans.push_back(res);
                if(nums[i]<0){
                    neg[abs(nums[i])]--;
                }
                i++;
                j++;
            }
        }
        return ans;
        
    }
};