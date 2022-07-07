class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int n=ranges.size();
        int count=0;
       /* if(left==right)
        {
         for(int j=0;j<n;j++)
         {
             if(left==ranges[j][0]&&left==ranges[j][1])
             { count =1;}
             else {count =0;}
         if(left>=ranges[j][0]&&left<=ranges[j][1])
      count =1;
             else count=0;
         }

        }
        */
        for(int i=left;i<=right;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(ranges[j][0]<=i&&i<=ranges[j][1])
                {
                   count++ ;
                    break;
                }
            }
        }
        if(count==right-left+1) return true;
        return false;
    }
};