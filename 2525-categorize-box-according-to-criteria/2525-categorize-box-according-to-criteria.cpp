class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
       long long vol=(long long)length*(long long)width*(long long)height;
       /* if(length>=1e4||width>=1e4||height>=1e4||mass>=1e4||vol>=1e4) return "bulky";
       else if(mass>=100) return "heavy";*/
         if((length>=1e4||width>=1e4||height>=1e4||mass>=1e4||vol>=1e9)&&mass<100) return "Bulky";
       else if((length<1e4&&width<1e4&&height<1e4&&mass<1e4&&vol<1e9)&&mass>=100) return "Heavy";
        else if((length>=1e4||width>=1e4||height>=1e4||mass>=1e4||vol>=1e9)&&mass>=100) return "Both";
        else if((length<1e4&&width<1e4&&height<1e4&&mass<1e4&&vol<1e9)&&mass<100) return "Neither";
        else return "wrong";
        
    }
};