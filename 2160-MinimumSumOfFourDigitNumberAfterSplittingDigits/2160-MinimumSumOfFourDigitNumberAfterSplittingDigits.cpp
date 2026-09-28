// Last updated: 9/28/2026, 3:13:13 PM
class Solution {
public:
    int minimumSum(int num) {
         vector<int>h;
        int new1=0;
        int new2=0;
      while(num!=0){
        int a=num%10;
        h.push_back(a);
        num=num/10;
      }
      sort(h.begin(), h.end());
      new1=h[0]*10+h[2];
      new2=h[1]*10+h[3];

        return new1+new2;
    }
};