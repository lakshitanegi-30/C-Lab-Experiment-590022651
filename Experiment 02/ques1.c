// WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.   

 #include<stdio.h> 
 int main()  
{ 
  int l,b; 
  scanf("%d%d",&l,&b); 
 
  printf("Area = %d\n",l*b); 
  printf("Perimeter = %d\n",2*(l+b)); 
 
  return 0; 
  }
