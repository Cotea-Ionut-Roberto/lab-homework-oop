#include <iostream>
#include "temperature.h"
using namespace std;

int main() {
    double c, f;
    cout << "Celsius: ";
    cin >> c;
    cout << "Fahrenheit: " << celsiusToFahrenheit(c) << endl;

    cout << "Farenheit: ";
    cin >> f;
    cout << "Celsius: " << fahrenheitToCelsius(f) << endl;

    return 0;
}