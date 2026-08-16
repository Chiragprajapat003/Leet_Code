// Last updated: 8/16/2026, 9:12:16 PM
class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        string Bulky = "";
        string Heavy = "";
        long long l = length;
        long long w = width;
        long long h = height;
        if((l*w*h >= pow(10,9)) || (l >= pow(10,4) ||h >= pow(10,4) || w >= pow(10,4))){
        Bulky = "Bulky";
        }

        if(mass >= 100){
            Heavy = "Heavy";
        }

        if((Heavy == "Heavy") && (Bulky == "Bulky")){
            return "Both";
        }else if((Heavy == "Heavy") && (Bulky != "Bulky")){
            return "Heavy";
        }else if ((Heavy != "Heavy") && (Bulky == "Bulky")){
            return "Bulky";
        }

        return  "Neither";
    }
};