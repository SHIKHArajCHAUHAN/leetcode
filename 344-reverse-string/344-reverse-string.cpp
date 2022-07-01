class Solution {
public:
    void reverseString(vector<char>& s) {
        int m=s.size();
        int i=0;
        int j=m-1;
        
            { while(j>i)
                    swap(s[i++],s[j--]);
            }
        
    }
};