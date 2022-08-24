class Solution {
public:
    int count=0;
    stack<char>st;
    string removeOuterParentheses(string s) {
              string ans={};

        for(auto &i:s){
            if(i=='(' && count==0){
                st.push(i);
                count++;
            }
            else if (i=='(' && count!=0){
                ans+='(';
                st.push(i);
                count++;
            }
            else{
                count--;
                st.pop();
                if(count>0) ans+=')';
            }
            
        }
        return ans;
    }
}; 
