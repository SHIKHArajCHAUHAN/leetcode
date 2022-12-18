class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int x=0;  vector<int>vec;
    
    for(int i=1;i<encoded.size()+2;i++) x=x^i;// sbka xor
    
    for(int i=1;i<encoded.size();i=i+2) x=x^encoded[i];
    
    vec.push_back(x);
    
    for(int i=0;i<encoded.size();i++) vec.push_back(vec.back()^encoded[i]);
    
    return vec;
    }
};