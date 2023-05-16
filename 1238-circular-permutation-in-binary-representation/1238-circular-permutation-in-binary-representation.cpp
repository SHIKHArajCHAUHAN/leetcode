class Solution {
public:
    void fn(int n, int start,vector<int>output,set<int>sett)
    {
        for(int i=0;i<n;i++)
        {
            int next=start^(1<<i);
            if(sett.find(next)!=sett.end())
            {
                output.push_back(next);
                sett.insert(next);
                fn(n,next,output,sett);
            }
        }
    }
    vector<int> circularPermutation(int n, int start) {//greycode
       // set<int>sett;
       //  vector<int>output;
       //  output.push_back(start);
       //  sett.insert(start);
       //  fn(n,start,output,sett);
       //  return output;
            vector<int> arr;
    for(int i = 0; i < (1 << n); i++){
        arr.push_back(i ^ (i>>1));
    }
    int it = (find(arr.begin(), arr.end(), start)) - arr.begin();
    vector<int> result;
    result.insert(result.end(), arr.begin()+it, arr.end());
    result.insert(result.end(), arr.begin(), arr.begin()+it);
        return result;
    }
};