class Solution {
public:
    void flip(vector<int>&arr,int i)
    {
        int start=0,temp;
        while(start<i)
        {
            temp=arr[start];
            arr[start]=arr[i];
            arr[i]=temp;
            i--;
            start++;
        }
    }
    vector<int> pancakeSort(vector<int>& arr) {
      vector<int>v;
        for(int i=arr.size()-1;i>=1;i--)
        {
            for(int j=1;j<=i;j++)
            {
                if(arr[j]==i+1)
                {
                    flip(arr,j);
                    v.push_back(j+1);break;
                }
            }
            flip(arr,i);
            v.push_back(i+1);
        }
        return v;
    }
};