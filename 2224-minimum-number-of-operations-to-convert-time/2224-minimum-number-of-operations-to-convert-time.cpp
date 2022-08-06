class Solution {
public:
    int convertTime(string current, string correct) {
       int a=stoi(current.substr(0,2))*60+stoi(current.substr(3));
        int b=stoi(correct.substr(0,2))*60+stoi(correct.substr(3));
        int diff=b-a;
        int ans=0;
         return (diff/60)+(diff%60)/15+((diff%60)%15)/5+(((diff%60)%15)%5);
    }
};