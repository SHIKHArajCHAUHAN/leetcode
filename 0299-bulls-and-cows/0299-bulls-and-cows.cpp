class Solution {
public:
    string getHint(string secret, string guess) {
        map<char, int>mP;
        int bulls = 0, cows = 0;
        for (int i = 0; i < secret.size(); i++) {
            if (guess[i] != secret[i]) {
                mP[secret[i]]++;
            }
        }
        for (int i = 0; i < guess.size(); i++) {
            if (guess[i] == secret[i]) {
                bulls++;
            }
            else {
                if (mP[guess[i]] > 0) {// dekh rhe ki kya guess me ele hai jo secret m tha or usko cnt kr rhe h aftr that usk cnt ko bta rhe h,,,mtkle ele remove kr de rhe h
                    cows++;
                    mP[guess[i]]--;
                } 
            }
        }
        return to_string(bulls) + "A" + to_string(cows) + "B";  
    }
};