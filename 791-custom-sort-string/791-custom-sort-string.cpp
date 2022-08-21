class Solution {
public:
    string customSortString(string order, string s) {
      string str;
        for(int i=0;i<order.size();i++)
        {
            string  temp;
            temp+=order[i];
            if(s.find(temp)!=-1)    // jab hm find kr skte hain
            {
                for(int j=0;j< count(s.begin(),s.end(),order[i]);j++)
                    str.push_back(order[i]);
            }
        }
            if(str.size()==s.size()){return str;}
            for(int i=0;i<s.size();i++)
        {
            string  temp;
            temp+=s[i];
            if(str.find(temp)==-1)     //find nhi ho rha;
            {
                for(int j=0;j< count(s.begin(),s.end(),s[i]);j++)
                    str.push_back(s[i]);
            }
        }
            return str;
    }
};