class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
       vector<int>ans;
        if(tomatoSlices%2==1||tomatoSlices>4*cheeseSlices||tomatoSlices<2*cheeseSlices)
            return {};
        
        return {tomatoSlices/2-cheeseSlices,2*cheeseSlices-tomatoSlices/2};
           
            
        
        
        
    }
};