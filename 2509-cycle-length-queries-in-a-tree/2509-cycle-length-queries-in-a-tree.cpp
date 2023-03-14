class Solution {
public:
    vector<int> cycleLengthQueries(int n, vector<vector<int>>& queries) {
       vector<int>v;
        for(auto x: queries){
            int ans = 1;
            int i = x[0], j = x[1];
            while(i!=j){ //jbb tk y log brabr nhi ho jate ..mtlb common ancister nhi mil jatA
                if(i>j){
                    i/=2; //kr rhe q ki parent node k 2*x ya 2*x+1 hai....to parent node llane k liy 2 se devide kr denge simply
                }
                else{
                    j/=2;
                }

                ans+=1;
            }
            v.push_back(ans);
        }
        return v;
    }
};