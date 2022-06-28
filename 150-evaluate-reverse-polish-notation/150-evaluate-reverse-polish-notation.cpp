class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
       // int res;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]!="+"&&tokens[i]!="-"&&tokens[i]!="*"&&tokens[i]!="/")
            { int z=stoll(tokens[i]);
                s.push(z);
            }
            else
            {
                int res;
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                if(tokens[i]=="+")
                {
                  res=x+y;
                    s.push(res);
                }
               else if(tokens[i]=="*")
                {
                    res=x*y;
                    s.push(res);
                }

                  else  if(tokens[i]=="/")
                    {
                        res=y/x;
                     s.push(res); 
                    }
               else 
                {
                    res=y-x;
                    s.push(res);
                }
                    
            }
                    
        }
        return s.top();
    }
};