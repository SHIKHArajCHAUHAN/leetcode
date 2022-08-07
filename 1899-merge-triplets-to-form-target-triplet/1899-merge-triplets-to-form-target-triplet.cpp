class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
       
        int n=triplets.size();
        int v[3]={INT_MIN,INT_MIN,INT_MIN};
        for(int i=0;i<n;i++)
        {
        
           if( triplets[i][0]>target[0]||triplets[i][1]>target[1]||triplets[i][2]>target[2])continue;
             else{
                  v[0] =max(triplets[i][0],v[0]) ;
                   v[1]=max(triplets[i][1],v[1]) ;
                  v[2]  =max(triplets[i][2],v[2]) ;

             }        

        }
        if(target[0]==v[0]&&target[1]==v[1]&&target[2]==v[2]) return true;
        return false;
    }
};