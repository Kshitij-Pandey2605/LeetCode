// Last updated: 7/31/2026, 9:18:04 PM
class Solution {
public:
    int minPartitions(string n) {
        int b=0;
        for(int i=0;i<n.length();++i){
            int h=n[i]-'0';
            if(b<h){
                b=h;
            }
        }
        return b;
    }
};