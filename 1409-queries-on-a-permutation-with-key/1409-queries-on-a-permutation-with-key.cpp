class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
       
        vector<int> result,P;

        for(int i=1;i<=m;i++){
            P.push_back(i);
        }
int temp;
        for(auto i: queries){
            for(int j=0;j<P.size();j++){
                if(i==P[j]){
                    cout<<j;
                    result.push_back(j);
                    temp=P[j];
                    P.erase(P.begin()+j);
                    P.insert(P.begin(),temp);
                    break;
                }
            }
        }

        return result; 
    }
};