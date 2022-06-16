class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
      // float x2=(x1+x2)/2 ;
      //  float d=(x2-x1)/2;
       int i2=x2-xCenter;
        int i1=x1-xCenter;
        int j1=y1-yCenter;
        int j2=y2-yCenter;
      //  if(i1<radius||i2<radius||j1<radius||j2<radius)
        /*    for(int i=j1;i<=j2;i++)
            {
                if(i1*i1+i*i<radius*radius||i2*i2+i*i<radius*radius)
                    return true;
            }
        
          for(int i=i1;i<=i2;i++)
          {
             if(j1*j1+i*i<radius*radius||j2*j2+i*i<radius*radius)
                 return true;
          }
        return false;*/
        for(int i=x1;i<=x2;i++)
        {
            for(int j=y1;j<=y2;j++)
            {
               if(pow(i-xCenter,2)+pow(j-yCenter,2)<=radius*radius)
                   return true;
            }
        }
        return false;

    }
};