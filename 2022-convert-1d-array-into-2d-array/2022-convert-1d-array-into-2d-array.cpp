class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
      int size=original.size();
    vector<vector<int>>ans;
         if(m*n !=size){
            return {};
        }
               vector<int> temp;
        for(int i=0; i<size; i++){
               temp.push_back(original[i]);
               if(temp.size()==n){
                   ans.push_back(temp);
                   temp.clear();
               }
        }
        return ans; 
    }
};