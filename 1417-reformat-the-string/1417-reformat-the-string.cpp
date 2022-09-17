class Solution {
public:
    string reformat(string s) {
       int digit_cnt=0,alpha_cnt=0;
        string digit1,alpha1;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                digit_cnt++;
                digit1+=s[i];
            }
            else if(isalpha(s[i])){
                alpha_cnt++;
                alpha1+=s[i];
            }
        }
		
        if(abs(digit_cnt-alpha_cnt)>=2){
            return "";
        }
        string str,str2;
        if(alpha_cnt>digit_cnt){
            str=alpha1;
            str2=digit1;
        }
        else{
            str=digit1;
            str2=alpha1;
        }
        cout<<str<<str2;
        int j=1,k=0;
        while(k<str2.size()){
            str.insert(j,1,str2[k]);
            k++;
            j=j+2;
        }
        return str;  
    }
};