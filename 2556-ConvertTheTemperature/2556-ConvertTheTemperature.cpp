// Last updated: 7/29/2026, 4:07:42 PM
class Solution {
public:
    vector<double> convertTemperature(double celsius) {

        double kelvin = celsius + 273.15;

        double fahrenheit = celsius * 1.80 + 32.00;

        return {kelvin, fahrenheit};
    }
};