class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        stack<char>str;
        for(int i=0;i<n;i++)
        {
            char ch=s[i];
            if(ch=='('||ch=='{'||ch=='['){
                str.push(ch);
            }
            else{
                if(!str.empty())
                {
                    char top=str.top();
                    if((ch==')'&&top=='(')||(ch=='}'&&top=='{')||(ch==']'&&top=='['))
                                       
                        str.pop();
                    
                    
                    else
                        return false;
                    
                }
                else
                    return false;
                
            }
        }           
        if(str.empty())
        
            return true; 
        else
            return false;
    }
};