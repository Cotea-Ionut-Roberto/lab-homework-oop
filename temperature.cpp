//
// Created by cotea on 10/23/2025.
//

#include "temperature.h"

double celsiusToFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32.0;
}

double fahrenheitToCelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}
