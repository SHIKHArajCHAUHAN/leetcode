class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
      /*  int x1,x2,y1,y2;
      x1=min(rec1[0],rec2[0]);
         x2=min(rec1[1],rec2[1]);
         y1=min(rec1[2],rec2[2]);
         y2=min(rec1[3],rec2[3]);
         if((x2>=x1)&&(y2>=y1)) return true;
       else return false;*/
           if(rec2[1]>=rec1[3] || rec1[1]>=rec2[3] || rec1[0]>=rec2[2] || rec2[0]>=rec1[2]) 
				   return false;
				return true;

    }
};