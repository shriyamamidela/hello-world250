/**  
 * @file temperature.cpp  
 * @brief Implementation of TemperatureConverter class.  
 */

#include "temperature.h"  
#include <iostream>  

using namespace std;  

/**  
 * @brief Converts Celsius to Fahrenheit.  
 */
double TemperatureConverter::celsiusToFahrenheit(double celsius) {  
    return (celsius * 9.0 / 5.0) + 32;  
}  

/**  
 * @brief Converts Fahrenheit to Celsius.  
 */
double TemperatureConverter::fahrenheitToCelsius(double fahrenheit) {  
    return (fahrenheit - 32) * 5.0 / 9.0;  
}  

/**  
 * @brief Main function to demonstrate TemperatureConverter class.  
 */
int main() {  
    double celsius = 25.0;  
    double fahrenheit = 77.0;  

    cout << celsius << "°C = " << TemperatureConverter::celsiusToFahrenheit(celsius) << "°F" << endl;  
    cout << fahrenheit << "°F = " << TemperatureConverter::fahrenheitToCelsius(fahrenheit) << "°C" << endl;  

    return 0;  
}
