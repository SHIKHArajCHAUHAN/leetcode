class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
         long long int l =1 , h = 1e14,mid, res =0 ;
        
        while(l<=h)
        {   
           long long  int   capacity = 0; 
            mid = (l+h)/2;

            for(auto x:ranks)
            {    
                 capacity +=  sqrt(mid/x); 

            }
            if(capacity>=cars)
            {   
                res  = mid; 
                h  = mid -1;
            }
            
            else l = mid +1; 
           
        }
        return res; 
    }
};