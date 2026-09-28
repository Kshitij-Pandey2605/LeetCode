// Last updated: 9/28/2026, 3:12:35 PM
class Solution {
public:
    vector<double> convertTemperature(double celsius) {

        double kelvin = celsius + 273.15;

        double fahrenheit = celsius * 1.80 + 32.00;

        return {kelvin, fahrenheit};
    }
};