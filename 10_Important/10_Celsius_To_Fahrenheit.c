//°F = (9/5 × °C) + 32.
#include <stdio.h>

int main() {
    float celsius, fahrenheit; 
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius); 
    
    fahrenheit = (9.0 / 5.0) * celsius + 32; 
    
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit); 
    
    return 0;
}