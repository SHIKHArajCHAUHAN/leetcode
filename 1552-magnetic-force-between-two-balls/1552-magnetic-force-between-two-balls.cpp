class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
      sort(position.begin(),position.end());int n=position.size(); 
        int low=1,high=position[position.size()-1],ans=0;
        while(low<=high)
        {
           int  mid=low+(high-low)/2,cnt=1;
            int i=0,j=0; 
            for(i=1;i<position.size();i++)
            {
                if(position[i]-position[j]>=mid)
                {
                    cnt++;
                    j=i;
                }
            }
            if(cnt>=m)
            {
                low=mid+1;ans=mid;
            }
            else
            {
                high=mid-1;
            }
         
        }
        return ans;
    }
};