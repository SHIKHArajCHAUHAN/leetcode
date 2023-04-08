class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."} ;
        set<string>s;
        for(int i=0;i<words.size();i++)
        {
            string str="";
            for(int j=0;j<words[i].size();j++)
            {
                str+=arr[words[i][j]-'a'];
            }
            s.insert(str);
        }
        return s.size();
    }
};