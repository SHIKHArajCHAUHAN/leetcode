class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
      //maxx ki value undex k equal hogi to chunk bdha denge
        int maxx=0;
        int chunk=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>maxx)
             maxx=arr[i];
            if(maxx==i)
            chunk++;
            
        }
        return chunk;
    }
};