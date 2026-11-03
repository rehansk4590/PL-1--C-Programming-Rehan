/*
Program(29)-> Write a program to calculate the area of a triangle.
Solution (1): No Arguments, No Return Value
*/
 #include <stdio.h>
void triangle()
{
 float base, height, area;
 printf("Enter base of triangle:");
 scanf("%f", &base);
 printf("Enter height of triangle:");
 scanf("%f", &height);

 area = 0.5 * base * height;

 printf("area of triangle = %f", area);
}    
int main ()
{
    triangle();
   return 0;
}