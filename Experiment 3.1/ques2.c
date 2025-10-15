/*WAP to compute the BMI Index of the person and print the BMI values 
as per the following ranges. You can use the following formula to compute BMI= 
weight(kgs)/Height(Mts)*Height(Mts).  
 
                           BMI 
Starvation                 <15 
Anorexic                15.1 to 17.5 
Underweight             17.6 to 18.5 
Ideal                   18.6 to 24.9 
Overweight              25 to 25.9 
Obese                   30 to 39.9 
Morbidity Obese         40.0 above   */

  #include <stdio.h> 
     int main() { 
    float weight, height, bmi; 
 
    printf("Enter your weight in kilograms: "); 
    scanf("%f", &weight); 
    printf("Enter your height in meters: "); 
    scanf("%f", &height); 
 
     bmi = weight / (height * height); 
     printf("Your BMI is: %.2f\n", bmi); 
 
     
    if (bmi < 15) 
        printf("Starvation\n"); 
    else if (bmi >= 15.1 && bmi < 17.5) 
        printf("Anorexic\n"); 
    else if (bmi >= 17.6 && bmi < 18.5) 
        printf("Underweight\n"); 
    else if (bmi >= 18.6 && bmi < 24.9) 
        printf("Ideal\n"); 
    else if (bmi >= 25 && bmi < 25.9) 
        printf("Overweight\n"); 
    else if (bmi >= 30 && bmi < 39.9) 
        printf("Obese\n"); 
      else 
        printf("Morbidity Obese\n"); 
       return 0; 
}
