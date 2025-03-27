#include "temperature.h"
#include <stdio.h>

int fahrenheit_to_celsius(int fahrenheit) {  //This is the conversion system for Fahrenheit to Celsius
    return (fahrenheit - 32) * 5 / 9;  // Integer arithmetic (no decimal part)
}

int celsius_to_fahrenheit(int celsius) {  //Conversion system - Vice versa
    return (celsius * 9 / 5) + 32;  // Integer arithmetic (no decimal part)
}

void cold_warm(int temperature, char scale) {  //This is where we describe what the temp feels like  
    if (scale == 'C') {  //We look at temps that are in Celcius 
        if (temperature < 0) {  //this is for freezing and be low 0 temps
            printf("It's below freezing.\n"); //Print that its freezing
        } else if (temperature >= 0 && temperature <= 30) { //Cold from the range 0 - 30
            printf("It's cold.\n");
        } else { //Anything above 30 celcius then it's warm
            printf("It's warm.\n"); //Prints out it warm
        }
    } else if (scale == 'F') { //This does the same as the Celcius one but in Fahrenheit
        if (temperature < 32) { //Prints below free
            printf("It's below freezing.\n");
        } else if (temperature >= 32 && temperature <= 86) {  //Prints Cold for the middle range of 32-86
            printf("It's cold.\n");
        } else { //Anything higher is warm
            printf("It's warm.\n");
        }
    }
}


