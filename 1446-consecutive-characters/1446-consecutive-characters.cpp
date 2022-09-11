class Solution {//charAt 
public:
    int maxPower(string s) {
       int maxx = INT_MIN;
        int count = 1;
        for(int i = 1; i < s.length(); i++){
            if(s[i] == s[i-1]){
                count++;
            }
            else{
                maxx = max(maxx, count);
                count = 1;
            }
        }
        return max(maxx, count);  
    }
};