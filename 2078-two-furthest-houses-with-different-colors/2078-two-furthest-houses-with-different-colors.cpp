class Solution {
public:
    int maxDistance(vector<int>& colors) {
      int n=colors.size();
        int i=0,j=n-1;
        int ans1=0,ans2=0;
        while(i<j)
        {
            if(colors[i]!=colors[j])
            {
            ans1=j-i; break;
            }
            else{j--;
                
            }
        }
        i=0;j=n-1;
        while(i<j)
        {
            if(colors[i]!=colors[j])
            {
                ans2=j-i;break;
            }
            else {i++;}
        }
        return max(ans1,ans2);
        return ans1;
    }
};