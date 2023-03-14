class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        vector<int>v;
           int height =log2(label);
        v.push_back(label);
        while(height){
            int left=pow(2,height-1);//left of x ==2*x right x=2*x+1
            int right=pow(2,height)-1; //so  right parents of x 
            label=left+right-(label/2);
            v.push_back(label);
            height--;
        }
        reverse(v.begin(),v.end());
        return v;
    }
};