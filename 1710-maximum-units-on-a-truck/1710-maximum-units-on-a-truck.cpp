class Solution {
public:
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int som=0;
       sort(boxTypes.begin(),boxTypes.end(),[&](vector<int>&a,vector<int>&b){return a[1]>b[1];});
        for(int i=0;i<boxTypes.size();i++)
        {
           int minn=min(truckSize,boxTypes[i][0]);
            som+=minn*boxTypes[i][1];
            truckSize-=minn;
                
        }
        
        return som;
    }
};