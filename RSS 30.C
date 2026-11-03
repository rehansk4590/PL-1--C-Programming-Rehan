 /*
Program(29)-> Write a program to find the factorial of a given number using a user defined function.
Solution (1): Arguments,No Return Value
*/
 #include <stdio.h>
void triangle(float base, float height)
{
 float area;
 area = 0.5 * base * height;
 printf("Area of triangle = %f",area);
}  
 int main()
{
   float b,h;

   printf("Enter base of triangle:");
   scanf("%f", &b);
   printf("Enter height of triangle:");
   scanf("%f", &h);

   triangle(b,h);
   return 0; 
}