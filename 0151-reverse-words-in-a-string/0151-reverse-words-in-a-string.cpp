class Solution {
public://LEARNT SOMTHING NEW resize()
    string reverseWords(string s) {
         reverse(s.begin(),s.end());
        int n = s.size() , i = 0 , left = 0 , right = 0;
        while(i < n)
        {
            while(i < n && s[i] == ' ') i++;
            while(i < n && s[i] != ' ') s[right++] = s[i++];
            if(left < right)
            {
                reverse(s.begin()+left,s.begin()+right);
                s[right++] = ' ';
                left = right;
            }             
            i++;
        }
        if(right > 0)   s.resize(right-1);
        return s;
    }
};