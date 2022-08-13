class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
       int step=0;
        int temp=capacity;
        for(int i=0;i<plants.size();i++)
        {


          //  int rem=capacity-plants[i];
            if(capacity>=plants[i])
            {
                step+=1;
             capacity=capacity-plants[i];
             
            }
            else {
                  capacity=temp;
                  step+=2*i+1;
                  capacity-=plants[i];}
        }
        return step;
    }
};