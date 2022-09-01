/*class Solution {
public:
    void solve(string digits,string s,int idx,vector<string>&v,string mapping[])
    {
        if(idx>=digits.length())
        {
            v.push_back(s);
            return;
        }
        int number=digits[idx]-'0';
        string value=mapping[number];
        for(int i=0;i<value.length();i++)
        {
            s.push_back(value[i]);
            solve(digits,s,idx+1,v,mapping);
            v.pop_back();
        }return ;
    }
    vector<string> letterCombinations(string digits) {
      vector<string>v;
        string s="";
        if(digits.length()==0) return v;
        int idx=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,s,idx,v,mapping);
        return v;
        
    }
};*/
class Solution {
private:
    void solver(string digits,string output,int index,vector<string>& ans,string mapping[])
    {
        if(index>=digits.length())
        {
            ans.push_back(output);
            return;
        }
        int number=digits[index]-'0';
        string tempoutput=mapping[number];
        for(int i=0;i<tempoutput.length();i++)
        { output.push_back(tempoutput[i]);
        solver(digits,output,index+1,ans,mapping);
        output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string output="";
        int index=0;
        if(digits.length()==0)
            return ans;
string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solver(digits,output,index,ans,mapping);
        return ans;
    }
};