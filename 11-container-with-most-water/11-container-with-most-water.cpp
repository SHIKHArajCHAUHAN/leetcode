class Solution {
public:
    int maxArea(vector<int>& height) {
      int ans = 0 ;
        int n = height.size() ;
        int i = 0 ;
        int j = n - 1 ;
        
        while(i < j)
        {
            int len = j - i  ; 
            
            int high = min(height[i],height[j]) ;
            
            int temp = len*high ;
            
            ans = max(ans,temp) ;
            
            if(height[i]>height[j])
                j-- ;
            else
                i++ ;
                 
            
        }
        return ans ;   
    }
};