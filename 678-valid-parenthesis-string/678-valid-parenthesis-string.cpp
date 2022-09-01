class Solution {
public:
    bool checkValidString(string s) {
      int n=s.length();
        stack<int>ch;// pos of openning bracket
        stack<int>ch2;// pos of star
        for(int i=0;i<n;i++)
        {
           if(s[i]=='(') ch.push(i);
            else if(s[i]==')') 
            {
                if(!ch.empty()) ch.pop();
                else if(!ch2.empty()) ch2.pop();
                else return false;
            }
            else ch2.push(i);
            
        }
        while(!ch.empty()&& !ch2.empty())
        {
            if(ch2.top()<ch.top())
                return false;
            ch.pop();ch2.pop();
        }
        
        if(!ch.empty()) return false;
        else return true;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
      /*  bool l2r = 1, r2l = 1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(') ch.push(i);
            else if(s[i]==')')
            {
                if(!ch.empty()) ch.pop();
                else
                {
                    l2r = 0;
                    break;
                }
            }
            else ch.push('*');
        }
        if(l2r)
        {
            while(!ch.empty())
            {
                if(ch.top()!='*')
                    l2r = 0;
                ch.pop();
            }
        if(!ch.empty()) l2r = 0;
        }
         for(int i=n-1;i>=0;i--)
        {
            if(s[i]==')') ch.push(i);
            else if(s[i]=='(')
            {
                if(!ch.empty()) ch.pop();
                else
                {
                    r2l = 0;
                    break;
                }
            }
            else ch.push('*');
    
        }
        if(r2l)
        {
            while(!ch2.empty())
            {
                if(ch2.top()!='*')
                    r2l = 0;
                ch2.pop();
            }
                    if(!ch2.empty()) r2l = 0;

        }
       return l2r||r2l;*/
        
        
    }
};
     /*   int h=0,l=0;
        for(auto i:s)
        {
            if(s[i]=='(')
            {
                h++;
                l++;
            }
            else if(s[i]==')')
            {
                h--;
                if(l>0) l--;
            }
            else {
                h++;//* ko plus
                if(l>0) l--;
            }
           if(h<0) return false; 
        }
        return (l==0);}
};*/