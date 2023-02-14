class Solution {
public:
    string addBinary(string a, string b) {
        int n1=a.length();
        int n2=b.length();
        int carry=0;
        if(n1>n2)
        {reverse(b.begin(),b.end());
            for(int i=0;i<n1-n2;i++)
            {
                b.push_back('0');
            } 
        
        reverse(b.begin(),b.end());}
          if(n1<n2)
        {reverse(a.begin(),a.end());
            for(int i=0;i<n2-n1;i++)
            {
                a.push_back('0');
            } 
        
        reverse(a.begin(),a.end());}
        
        for(int i=a.size()-1;i>=0;i--)
        {
            if(carry==1)
               {
                if(a[i]==b[i])
                {
                    if(a[i]=='0')
                    { a[i]='1';
                     carry=0;}
                }
                   else a[i]='0';     
            
            }
             else
               {
                if(a[i]==b[i])
                {
                    if(a[i]=='1')
                    { a[i]='0';
                     carry=1;
                    }
                }
                   else a[i]='1'; 
                         
                
            
            }
        }
        
        if(carry) a='1'+a;
          
      /*  if(n2<n1)
        {
            reverse(b.begin(),b.end());
            for(int i=0;i<n1-n2;i++)
            {
                b.push_back('0');
            }
             reverse(b.begin(),b.end());

        }
           if(n1<n2)
        {
            reverse(a.begin(),a.end());
            for(int i=0;i<n2-n1;i++)
            {
                a.push_back('0');
            }
             reverse(a.begin(),a.end());

        }
        for(int i=a.size()-1;i>=0;i--)
        {
            if(carry == 1)
            {
                if(a[i]==b[i])
                {
                    if(a[i]!='1')
                    {
                        a[i] = '1';
                        carry = 0;
                    }
                }
                else a[i] = '0';
            }
            else //carry=0
            {
                if(a[i]==b[i])
                {
                    if(a[i]=='1')
                    {
                        a[i] = '0';
                        carry = 1;
                    }
                }
                else a[i] = '1';
            }
        }
        if(carry) a = '1'+a;*/
        return a;
    }
};

//   10
// -----------
//   11111111111111111111111111111111111111111111111111111111111111111111111111111111111111
//   10000000000000000000000000000000000000000000000000000000000000000000000000000000000000
// -------
//  100