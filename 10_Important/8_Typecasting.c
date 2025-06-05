//Typecasting: Typecasting in C is the process of converting one data type into another.
//Types:  implicit (automatic conversion by the compiler) , explicit (manual conversion by the programmer).

//implicit Typecasting : Happens automatically when a smaller data type is assigned to a larger data type.
//Example: Assigning an int to a float converts it automatically.

//Done manually using typecast operators (e.g., (float), (int), etc.).
//Needed when converting a larger data type to a smaller one or to avoid integer division.

// Implicit Typecasting 
#include <stdio.h>

int main() {
    int a = 5;
    float b = 2.0;
    
    // Implicit typecasting: int automatically converted to float
    float result = a / b;  

    printf("Implicit Typecasting (int / float): %f\n", result); 

    return 0;
}

/*
//Explicit Typecasting
#include <stdio.h>

int main() {
    int x = 5, y = 2;
    
    // Explicit typecasting: Converting int to float manually
    float result = (float)x / y;  

    printf("Explicit Typecasting (float / int): %f\n", result); 

    return 0;
}
*/