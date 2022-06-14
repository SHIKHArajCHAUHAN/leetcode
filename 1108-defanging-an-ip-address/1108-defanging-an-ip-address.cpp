class Solution {
public:
    string defangIPaddr(string address) {
        int n=address.length();
        std:stringstream s;
        for(int i=0;i<n;i++)
        {
            if(address[i]=='.')
              //  address[i]=='[.]';
                s<<"[.]";
            else
                s<<address[i];
            
        }
        return s.str();
        
    }
};