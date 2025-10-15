/* WAP to take check if the triangle is valid or not. If the validity is 
established, do check if the triangle is isosceles, equilateral, right angle, or scalene. 
Take sides of the triangle as input from a user. */

 #include <stdio.h> 
 
    int main() { 
    float a, b, c; 
 
    printf("Enter three sides of the triangle:\n"); 
    scanf("%f %f %f", &a, &b, &c); 
 
    // Check if triangle is valid 
    if (a + b > c && a + c > b && b + c > a)  
{ 
        printf("Valid triangle.\n"); 
 
        if (a == b && b == c) 
            printf("Equilateral triangle.\n"); 
 
        else if (a == b || b == c || a == c) 
            printf("Isosceles triangle.\n"); 
        else 
            printf("Scalene triangle.\n"); 
 
// Check for right-angled triangle 
if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)) 
printf("Also a Right-angled triangle.\n"); 
} else { 
printf("Not a valid triangle.\n"); 
} 
return 0; 
}
