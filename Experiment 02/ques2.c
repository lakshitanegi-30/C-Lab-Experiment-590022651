// WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.

  #include <stdio.h> 
   int main() 
{ 
    float cel, fah; 
 
    printf("Enter temperature in Celsius: "); 
    scanf("%f", &cel); 
 
    fah = (cel * 9.0 / 5.0) + 32.0; 
    printf("%f Celsius = %f Fahrenheit\n", cel, fah); 
 
    return 0; 
 }
