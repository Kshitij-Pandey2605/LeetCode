// Last updated: 7/31/2026, 9:20:15 PM
class Solution {
public:
    bool isPerfectSquare(int num) {
        long long left = 1;
        long long right = num;

        while(left <= right){

            long long mid = left + (right - left) / 2;

            long long square = mid * mid;

            if(square == num){
                return true;
            }
            else if(square > num){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }

        return false;
    }
};