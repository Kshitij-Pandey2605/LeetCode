// Last updated: 7/29/2026, 4:07:44 PM
class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {

        long long volume = 1LL * length * width * height;

        bool bulky = (length >= 10000 ||
                       width >= 10000 ||
                       height >= 10000 ||
                       volume >= 1000000000);

        bool heavy = (mass >= 100);

        if(bulky && heavy){
            return "Both";
        }
        else if(bulky){
            return "Bulky";
        }
        else if(heavy){
            return "Heavy";
        }

        return "Neither";
    }
};