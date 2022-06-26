class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>s;
        int sum=0,x,y;
        for(int i=0;i<ops.size();i++)
        {
           if(ops[i]=="C") 
           {
              // sum=sum-s.top();
               s.pop();
           }
            else if(ops[i]=="D")
            {
                x=s.top()*2;
                s.push(x);
               // sum=sum+x;
            }
           else if(ops[i]=="+")
            {
                x=s.top();
                s.pop();
                y=s.top();
               s.pop();
                s.push(y);
                s.push(x);
                s.push(x+y);
               // sum=sum+x+y;
                
            }else
           {x=stoll(ops[i]);
               s.push(x);
           // sum=sum+x;
           }
        }    while(!s.empty()){        
            sum+=s.top();
            s.pop();}

        return sum;
    }
};