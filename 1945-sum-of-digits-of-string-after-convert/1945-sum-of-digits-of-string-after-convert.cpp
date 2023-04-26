class Solution {
public:
    int findDigitSum(string n){
    int sum = 0;
    for (auto x : n){
        sum += x - '0';
    }
    return sum;
}

int getLucky(string s, int k) {
    map<char, int> mp;
    int ctr = 1;
    for (char ch='a' ; ch<='z' ; ch++){
        mp[ch] = ctr++;
    }
    
    string num = "";
    for(auto x : s){
        num += to_string(mp[x]);
    }
    
    string n1 = num;
    while (k--){
        int sum = findDigitSum(n1);
        n1 = to_string(sum);
    }
    
    return stoi(n1);   
    }
};